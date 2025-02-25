#include <iostream>
using namespace std;
int main()
{
    int min=0,max=0;
    cin>>min>>max;
    if(min>max)
    {
        int temp=min;
        min=max;
        max=temp;
    }
    while(min<=max)
    {
        cout<<min<<endl;
        min++;
    }
    return 0;
}