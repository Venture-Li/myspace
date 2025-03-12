#include <iostream>
using namespace std;
int main()
{
    int i = 9;
    //悬垂else问题，用块解决，断掉if的延续性
    // if(i>10)
    //     if(i>100)
    //         cout<<">100"<<endl;
    // else
    //     cout<<"<10"<<endl;
    if(i>10)
    {
        if(i>100)
            {
                cout<<">100"<<endl;
            }
    }
    else
        cout<<"<10"<<endl;
    return 0;
}