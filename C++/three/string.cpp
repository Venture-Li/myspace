#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;//输出时什么也没有，连空格也没有
    string s2("hello s2");
    string s3 = "hello s3";
    string s4(10,'c');//注意(10,"c")是不对的，''表示字符
    cout<<s1<<"  "<<s2<<"  "<<s3<<"  "<<s4<<endl;
    string word;
    // while(cin>>word)//cin对于string，空格分开cin  ，换行符敲入缓存
    // {
    //     cout<<word<<endl;
    // }
    // while(getline(cin,word))//换行符分开getline    ，换行符敲入缓存
    // {
    //     cout<<word<<endl;
    // }
    //还要记住s.size()代表的是什么，是一个特殊类型，无符号
    string h1 = "habbbbbbbb";
    string h2 = "hbbbbb";//除了"hell"(string)>"hel"(string)这种情况，还有第一个不同字符的比较结果
    if(h2>h1)
    {
        cout<<"nihao"<<endl;
    }
    //！！！字符串字面值和string不同，用法也不同，字符串字面值是const char []，无法进行比较等操作
    return 0;
}