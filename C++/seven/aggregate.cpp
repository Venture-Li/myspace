#include <iostream>
using namespace std;
struct aggregate
{
    int age;
    string name;
    int id = 0;
};

int main()
{
    aggregate a1{10,"nihao",10};
    return 0;
}