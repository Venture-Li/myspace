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
            break;
        }
        above = s;
    }
    return 0;
}