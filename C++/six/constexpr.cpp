#include <iostream>
using namespace std;
constexpr int test(int i)
{
    return i*2;
}
int main()
{
    int a = 2;
    cout<<test(a)<<endl;
    //constexpr int b = test(a);报错，constexpr是保证函数返回值是常量表达式的必要不充分条件
    constexpr int b = test(2);//constexpr是用来检测是否是常量表达式的
    return 0;
}