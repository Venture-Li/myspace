#include <iostream>
using namespace std;
int main()
{   
    const int size = 10;
    int array[size] = {0,1,2,3,4,5,6,7,8,9};
    for(auto i:array)
    {
        cout<<i;
    }
    cout<<endl;
    int (*p)[size] = &array;
    cout<<**p<<endl;
    int *k = begin(array);
    cout<<*(k+5);
    return 0;
}