#include <iostream>
using namespace std;
int main()
{
    // 如果位运算对象是小整形，则会提升为int
   unsigned char i = 0xff;
   cout<<(i<<1)<<endl;
    return 0;
}