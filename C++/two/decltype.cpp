#include <iostream>
using namespace std;
int main()
{
    //只想要表达式的类型，不想要表达式赋值
    const int ci = 0,&cj = ci;
    const int *p = &ci;
    decltype(ci) a = 11;
    decltype(cj) b = ci;
    //decltype(cj) c;  cj几乎永远代表ci，仅作为一个别名，只有在decltype中作为引用类型
    decltype(cj+0) c = 0;//将引用回归数据
    decltype(*p) d = ci;//*p -> (ci) -> 一个变量视作赋值语句左值的一种特殊表达式，得到引用类型，例如（a=b）
    decltype((ci)) e = ci;//与上同理
    int m=0,n=0;
    decltype(m=n) k = m;//赋值得到引用
}