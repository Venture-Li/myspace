#include <iostream>
using namespace std;
int all = 10;
void test(int i,int j)
{
    i = 0;
    j = 0;
}
int main()
{
    int i = 100,j = 1000;
    test(i,j);
    cout<<i<<" "<<j<<endl;

}