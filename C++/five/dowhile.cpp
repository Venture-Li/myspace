#include <iostream>
using namespace std;
int main()
{
    string s1="",s2="";
    do
    {
        cout<<"please input"<<endl;
        cin>>s1>>s2;
        if(s1.size()<s2.size())
        {
            cout<<s1<<endl;
        }
        else cout<<s2<<endl;
        cout<<"you want again? y/n"<<endl;;
        cin>>s1;
    } while (s1 == "y");
    
    return 0;
}