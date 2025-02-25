#include <iostream>
using namespace std;
int main()
{
    int sum=0,num=1;

    while(num<=10)
    {
        sum+=num;
        num++;
    }
    cout<<"The sum of 1 to 10 = "<<sum<<endl;
    return 0;
}