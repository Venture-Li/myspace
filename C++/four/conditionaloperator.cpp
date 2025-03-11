#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec{0,1,2,3,4,5,6,7,8,9,10};
    for(auto &i:vec)
    {
        i = i*((i%2)==1?2:1);
    }
    for(auto i = vec.begin();i!=vec.end();i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}