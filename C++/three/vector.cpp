#include <iostream>
#include <vector>

using namespace std;
int main()
{
    //vector注意构造与列表初始化的意义不同，以及vector需要包含对象（非引用）
    vector<int> s(10,1);
    vector<int> s{10,1};
    vector<int> result;
    int i = 0;
    while(cin>>i)
    {
        result.push_back(i);
    }
    return 0;
}