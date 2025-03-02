#include <iostream>
using namespace std;
int main()
{
    //常量表达式：1.初始值可知  2.数据类型为常量
    int staff = 27;//不是，数据类型出错
    const int stuff = sizeof(staff);//不对，初始值不简单可知
    //简单介绍constexptr--类似const，定义变量为常量表达式
    int a = 10;
    //constexpr int *p = &a; 
    constexpr int *p = nullptr;//类似于int *const 方便编译器验证


    return 0;
}