#include <iostream>
using namespace std;
int main()
{
    int i = 0,j = 0;
    while(cin>>i>>j)
    {
        try
        {
            if(j == 0)
            {
                throw runtime_error("zero is coming!");
            }
            cout<<i<<" % "<<j<<" = "<<i/j<<endl;
        }
        catch(runtime_error err)//多用引用，因为有拷贝机制，机理为throw 创建了一个对象但是没有起名就抛出
        {
            std::cerr << err.what() << '\n';
        }
        
    }
    return 0;
}