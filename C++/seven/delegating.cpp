#include <iostream>
using namespace std;
class Person
{
    public:
    //传入参数为常量时注意const关键字
    Person(const string &s1,string s2,int i):name(s1),id(s2),age(i){}
    Person():Person("","",0){}
    Person(string s2,int i):Person("",s2,i) {}
    Person(string s1,string s2):Person(s1,s2,0) {}
    string name;
    string id;
    int age=0;
};
int main()
{
    Person p1("liwenchao","1980611");
    cout<<"age:"<<p1.age<<endl;
    cout<<"name:"<<p1.name<<endl;
    cout<<"id:"<<p1.id<<endl;
    return 0;
}