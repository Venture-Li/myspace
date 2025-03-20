#include <iostream>
#include <vector>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a-b;
}
int divison(int c,int d)
{
    return c/d;
}
int main()
{
    vector<int (*)(int,int)> vec;//什么时候可以不写形参名字？这里
    vec.push_back(&add);
    vec.push_back(&sub);
    vec.push_back(&mul);
    vec.push_back(&divison);
    int m = 100,n = 10;
    cout<<(*vec[3])(m,n)<<endl;;
}