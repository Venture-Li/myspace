#include <iostream>
using namespace std;

void test(int i)
{
    cout<<i<<endl;
}
int main()
{
    void test(string s);//局部抹除前面
    //test(15);
    return 0;
}