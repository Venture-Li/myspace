#include <iostream>
using namespace std;
struct Sales_data
{
    Sales_data() = default;
    Sales_data(const string &s):bookNO(s){}
    Sales_data(const string &s,unsigned int i,double p):
               bookNO(s),units_sold(i),revenue(i*p){}
    Sales_data(istream &is)
    {
        double price = 0;//单价，不在类内
        is>>this->bookNO>>this->units_sold>>price;
        this->revenue = price*(this->units_sold);
    }

    string isbn () const {return bookNO;}
    Sales_data& combine(const Sales_data &rhs);
    double avg_price ()const;

    string bookNO;
    unsigned int units_sold = 0;
    double revenue = 0.0;
};
Sales_data add(const Sales_data &s1,const Sales_data &s2);
ostream &print(ostream&os,const Sales_data &item);
istream &read(istream&is,Sales_data &item);

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    //等价于this->units_sold += rhs.units_sold
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
double Sales_data::avg_price()const
{
    if(units_sold)
    {
        return revenue/units_sold;
    }
    else 
        return 0;
}
ostream &print(ostream&os,const Sales_data &item)
{
    os<<item.bookNO<<" "<<item.units_sold<<" "
      <<item.revenue<<" "<<item.avg_price();
    return os;
    
}
istream &read(istream&is,Sales_data &item)
{
    double price = 0;//单价，不在类内
    is>>item.bookNO>>item.units_sold>>price;
    item.revenue = price*item.units_sold;
    return is;
}
int main()
{
    Sales_data s1("010203",20,30.0);
    Sales_data s2(cin);
    cout<<s1.avg_price()<<endl;
    cout<<s2.bookNO;
    return 0;
}