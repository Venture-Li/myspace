#include <iostream>
#include <vector>
using namespace std;
vector<int> test(int i)
{
    if(i == 1)
    {
        return {1};
    }
    if(i == 2)
    {
        return {1,2};
    }
    if(i == 3)
    {
        return {1,2,3};
    }
}
int main()
{
    for(auto i :test(3))
    {
        cout<<i<<endl;
    }
    return 0;
}