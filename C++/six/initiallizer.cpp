#include <iostream>
#include <initializer_list>
using namespace std;
void test(int i,initializer_list<string> s)//形参数量可变，用这个，这个和vector不同之处是这个里面的值是常量
{
    cout<<i<<endl;
    for(auto &a:s)
    {
        //a = a+"++";
        cout<<a<<endl;
    }
}
int main()
{
    test(5,{"asd","asddd"});
    return 0;
}
// #include <iostream>
// #include <vector>
// using namespace std;
// void test(int i,vector<string> s)
// {
//     cout<<i<<endl;
//     for(auto &a:s)
//     {
//         a = a+"++";
//         cout<<a<<endl;
//     }
// }
// int main()
// {
//     test(5,{"asd","asddd"});
//     return 0;
// }