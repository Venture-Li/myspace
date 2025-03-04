//将0-15数字转化为16进制输出

//思路：有限长标准答案放入序列，根据索引计算
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    
    uint16_t c = 0;
    const string answer = "0123456789ABCDEF";
    cout<<"Please input:"<<endl;
    while(cin>>c)
    {
        cout<<answer[c];
    }
    return 0;
}