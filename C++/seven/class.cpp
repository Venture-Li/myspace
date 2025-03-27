#include <iostream>
using namespace std;
class Y;
class X
{
    //使用外部数据类型要规范先后顺序，可以先声明使用
    Y* pointer;
};
class Y
{
    X x;
};
int main()
{

    return 0;
}
