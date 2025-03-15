#include <iostream>
using namespace std;
int all = 10;
void test(const int &s)//要想用引用接收字面值常量，必须加const
{

}
int main()
{
    //test(7);
    test(7);
    return 0;
}