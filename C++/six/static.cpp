#include <iostream>
using namespace std;
int all = 10;
void test()
{
    static int i = 0;
    ++i;
    cout<<"The num of test = "<<i<<endl;
}
int main()
{
    test();
    test();
    return 0;
}