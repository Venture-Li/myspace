#include <iostream>
using namespace std;
class Screen
{
    public:
    using pos = string::size_type;
    Screen() = default;
    Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
    char get() const//常量成员函数，使用更广
    {
        return contents[cursor];
    }
    inline char get(pos r,pos c) const
    {
        return contents[r*width+c];
    }
    Screen &move(pos r,pos c)
    {
        cursor = r*width+c;
    }
    private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    string contents;
    mutable unsigned int access_ctr = 0;//在const成员函数、常量类中也可以改变
};
int main()
{

    return 0;
}