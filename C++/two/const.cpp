#include <iostream>
using namespace std;
int main()
{   
    const int k = 100;
    int i = 10;
    int *p = 0;
    //本身的值不能变，顶层const
    const int i1 = 10;
    int *const p1 = 0;
    //所指不能变，底层const
    const int *p2 = 0;
    const int &p3 = 0;//注意，没有 const int &const p3 这类写法，因为p3不是一个对象
    //一些例子
    //顶层const作为被拷贝对象影响不大，因为不会改变他们的值
    i = i1;
    p = p1;
    //底层const很有学问，类型不一样时看看数据类型能否转换，非常量可以转化为常量--也是引用/指针类型可以和所指对象类型不一样的特例
    p2 = p;
    p2 = &k;//完全符合
    //p = p2//不可以

    return 0;
}