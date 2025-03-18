#include <iostream>
using namespace std;
int &test()//不要返回局部对象（临时变量）的引用或指针，可以通过形参链接
{
    int a = 9;
    return a;
}
int main()
{
    cout<<test<<endl;
}