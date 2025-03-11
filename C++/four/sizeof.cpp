#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int i = 100;
    vector<int> k = {0,1,2,3,4,5,6,7,8,91,1,11,1,1,1,1,1,1,1,1,1,11};
    int m[10] = {0,1,2,3,4,5,6,7,8,9};
    long n = 10000;
    long *p = &n;
    cout<<sizeof (i)<<endl;;
    cout<<sizeof (k)<<endl;
    cout<<sizeof m<<endl;;
    cout<<sizeof p<<endl;;
    cout<<sizeof (*p)<<endl;;
    cout<<sizeof (char)<<endl;
    return 0;
}