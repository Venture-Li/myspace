#include <iostream>
using namespace std;
int main()
{
    const int k = 11;
    //C++11很好用的一个赋值类型说明符
    auto i = 11;
    auto ii = k;//auto会忽略掉顶层const
    const auto iii = k;//可用const补充auto
    auto iiii = &k;//底层const不会忽略
    auto *p = &k;
    const auto &u = 11;
    //int &o = 11;不能为非常量引用绑定字面值,非常量到常量的关系
    int m = 55;
    const int &h = m;
    return 0;
}