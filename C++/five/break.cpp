#include <iostream>
using namespace std;
int main()
{
    string s = "",above = "";
    
    while(cin>>s)
    {
        if(s == above)
        {
            cout<<"double"<<endl;
            return 0;
        }
        above = s;
    }
    cout<<"no"<<endl;
    return 0;
}