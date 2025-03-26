#include <iostream>
using namespace std;
class Screen
{
    public:
    //类型成员先定义后使用，一般放在类最前面，作为隐藏细节
    using pos = string::size_type;
    Screen() = default;
    Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
    private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    string contents;
};
int main()
{
    Screen::pos height = 100;
    Screen::pos width = 100;
    char c = 'c';
    Screen s(height,width,c);
    return 0;
}