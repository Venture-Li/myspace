#include <iostream>
using namespace std;
int all = 10;
//数组的特殊性：1、数组不能拷贝  2、数组通常转化为指针
//所以数组作为函数参数都是指针传递，没有值传递,请多用指针，并多强化数组指针和指针数组的概念
void test(const int p[5])
{
    cout<<p[0]<<endl;
}
int main()
{
    int array[5] = {1,2,3,4,5};
    test(array);
    cout<<array[0];
}