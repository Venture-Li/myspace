#include <iostream>
using namespace std;
class Screen
{
    public:
    //类型成员先定义后使用，一般放在类最前面，作为隐藏细节
    using pos = string::size_type;
    Screen() = default;
    Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
    //隐式内联，成员函数都是内联函数，内联函数若要跨文件请定义于头文件
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
};
int main()
{

    return 0;
}