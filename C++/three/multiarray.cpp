#include <iostream>
using namespace std;
int main()
{   
    int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(auto &row:ia)//多维数组外围必须用auto引用，否则会自动转化为指针类型
    {
        cout<<row<<" ";
        for(auto col:row)
        {
            cout<<col<<" ";
        }
    }
    int array[5] = {0,1,2,3,4};
    for(auto i :array)
    {
        cout<<i;
    }
    return 0;
}