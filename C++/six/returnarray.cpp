#include <iostream>
using namespace std;
//typedef int (*p)[10];
using p = int [10];//*p即为指向有10个int数组的指针
int ia[10] = {11,11,11,11,11,11,11,11,11,11};
int (*test(int i))[10]
{
    
    ia[0] = i;
    return &ia;

}
int main()
{
    int i = 0;
    cout<<((*test(i))[1])<<endl;
    for(auto i : ia)
    {
        cout<<i<<endl;
    }
    return 0;
}