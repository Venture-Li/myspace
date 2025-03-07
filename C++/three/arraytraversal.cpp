#include <iostream>
#include <vector>
using namespace std;
int main()
{   
    int array[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    for(int (&p)[4]:array)
    {
        for(int q:p)
        {
            cout<<q;
        }
        cout<<endl;
    }
    for(int (*p)[4] =array;p<array+3;p++)
    {
        
        for(int *q = *p;q<*p+4;q++)//其实*p与p都是首地址，类型不同
        {
            cout<<*q;
        }
        cout<<endl;
    }
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<4;j++)
        {
            cout<<array[i][j];
        }
        cout<<endl;
    }
    for(auto &i : array)
    {
        for(int j:i)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}