#define NDEBUG
#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    int j = 10,k = 100;
    assert(j>k);
    if(j<k)
    {
        cerr<<"Error"<<__FILE__
            <<"in Function:"<<__func__
            <<"at line"<<__LINE__<<endl
            <<"    Compiled on "<<__DATE__;
    }
    return 0;
}