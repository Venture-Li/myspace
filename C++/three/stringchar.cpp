#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s = "hello,world";
    for(auto &c:s)
    {

        cout<<c<<endl;;
        c = 'c';
    }
    cout<<s<<endl;
    return 0;
}