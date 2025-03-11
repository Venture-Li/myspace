#include <iostream>
 
using namespace std;
 
int main()
{
    int x = 10, y = 20;
    //检查条件为真的情况,注意逗号运算符求值顺序
    bool someValue = true;
    int a = someValue ? (++x, ++y): (--x, --y);
    cout << "x=========" << x << endl;
    cout << "y=========" << y << endl;
    cout << "a=========" << a << endl;
    
    return 0;
}