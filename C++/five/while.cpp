#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string now = "";
    string above = "";
    int result = 0,max = 0;
    while(cin>>now)
    {
        if(result==0)
        {
            ++result;
            above = now;
        }
        else
        {
            if(now == above)
            {
                ++result;
            }
            else
            {
                if(max<result)max=result;
                result = 1;
                above = now;
            }
        }
    }
    cout<<max;
    return 0;
}