#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int &j = i;
    int m = 100;
    int *p=&j;
    cout<<*p<<endl;
    p = &m;
    cout<<*p<<endl;
    void *pp = &i;
    //cout<<*pp<<endl;
    return 0;

}