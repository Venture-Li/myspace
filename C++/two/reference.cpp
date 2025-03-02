#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    int &u=i;
    int &p=u;
    p = 555;
    cout<<i<<endl;
    return 0;
}