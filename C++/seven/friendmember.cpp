#include <iostream>
#include <vector>
//注意成员函数做友元的严格顺序
using namespace std;
class Screen;
class Window_mgr
{
    public:
    Window_mgr();
    using ScreenIndex = vector<Screen>::size_type;
    void clear(ScreenIndex i);
    private:
    //注意{}仅为初始化符号，还要 ; ,里面初始化没有名字，用的是构造函数
    vector<Screen> screens;

};
class Screen
{
    friend void Window_mgr::clear(ScreenIndex i);
    public:
    using pos = string::size_type;
    Screen() = default;
    Screen(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' '){}
    Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
    char get() const
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
        return *this;
    }
    Screen &set(char c)
    {
        contents[cursor] = c;
        return *this;
    }
    Screen &set(pos r,pos c,char s)
    {
        contents[r*width+c] = s;
        return *this;
    }
    Screen &dispaly(ostream &os)
    {
        do_dispaly(os);
        return *this;
    }
    const Screen &dispaly(ostream &os) const
    {
        do_dispaly(os);
        //在常量成员函数中，this转变为指向常量类的指针
        return *this;
    }



    private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    string contents;
    void do_dispaly(ostream &os) const
    {
        for(int i = 0;i<height;i++)
        {
            for(int j = 0;j<width;j++)
            {
                os<<contents[i*width+j]<<' ';
            }
            os<<endl;
        }
    }
};
Window_mgr::Window_mgr()
{
    screens.push_back(Screen(24,80,' '));
}
void Window_mgr::clear(ScreenIndex i)
{
    Screen &s = screens[i];
    s.contents = string(s.height*s.width,' ');
}
int main()
{
    Screen myscreen(5,5,'x');
    myscreen.move(4,0).set('#').dispaly(cout);
    cout<<endl;
    myscreen.dispaly(cout);
    cout<<endl;
    return 0;
}