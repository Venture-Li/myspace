#include <iostream>
using namespace std;
inline const string &
shorter(const string &s1,const string &s2)
{
    return s1<s2?s1:s2;
}

int main()
{
    cout<<shorter("123","1234");
   return 0;
}