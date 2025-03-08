#include <iostream>
using namespace std;
int main()
{
    int i = 1,j = 2,k = 3;
    if(i<j<k)//关系运算符满足左结合律，从左到右运算，i<j -> true  即为1<k
    {
        cout<<"nihao";
    }
    return 0;
}