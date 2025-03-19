#include <iostream>
using namespace std;
int a = 100;
void test(int i = 10,int j = a)
{
    cout<<i<<" "<<j<<endl;
}
int main()
{
    test();
    test(11);
    test(11,12);
    a = 50;
    test();
    int a = 150;
    test();
   return 0;
}