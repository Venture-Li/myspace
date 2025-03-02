#include <iostream>
using namespace std;
//切忌混用有符号数和无符号数->无符号数
extern int j = 10;
int main()
{
    unsigned int u = 10;
    int i =-42;
    int _=10;
    cout<<_<<endl;
    //extern int f = 10;
    int num = 010;
    cout<<u+i<<"  "<<num<<endl;
    //int m = 1.15;
    //int n{1.15}
    int n;
    string m;
    cout<<m<<n<<endl;
    return 0;
}