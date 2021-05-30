#include<iostream>
using namespace std;
class num
{
private:
    int a,b,add;
public:
    num();//const added
    void setdata();
};

num::num()//initialing and declayering const
{
    a=0;
    b=0;
};

inline void num::setdata()//inline func declayered to set value
{
    cout<<"enter num."<<endl;
    cin>>a>>b;
    cout<<a+b<<endl;
};

int main()
{
    num r;
    r.setdata();//will set value and print 
   
return 0;
}





