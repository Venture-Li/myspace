#include <iostream>
using namespace std;
int main()
{
    typedef double dou,*p;//typedef作为声明语句中基本数据类型的一部分
    dou k = 3.1415926;
    const p ponter = &k;
    //const p 代表的是const (double*) 而非 const double *,const从底层变为顶层
    //ponter = nullptr;

    return 0;
}