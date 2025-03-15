#include <iostream>
using namespace std;
int all = 10;
int main()
{
    int part = 0;
    cout<<all<<" "<<part<<endl;
    int all = 0;
    cout<<all<<" "<<part<<endl;
    ::all+=::all+1;
    cout<<::all<<endl;
    int i = 100;
    int sum = 0;
    for(int i = 0; i!=10;i++)
    {
        sum += i;
    } 
    cout<<i<<" "<<sum<<endl;
    return 0;
}