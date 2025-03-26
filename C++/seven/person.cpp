#include <iostream>
using namespace std;
class Person
{
    friend void print_name(Person);
    friend void print_address(Person);
    public:
    Person() = default;
    Person(string &s1,string &s2):name(s1),address(s2) {}
    Person(istream &is)
    {
        is>>name>>address;
        cout<<"accept!"<<endl;
    }

    private:
    string name;
    string address;
    
};
void print_name(Person p)
{
    cout<<p.name<<endl;
}
void print_address(Person p)
{
    cout<<p.address<<endl;
}
int main()
{
    Person p;
    Person p1(cin);
    print_name(p1);
    print_address(p1);
    return 0;
}