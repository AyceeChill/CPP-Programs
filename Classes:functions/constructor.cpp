#include <iostream>
using namespace std;

class num
{

private:
    int a, b;

public:
    num();//constructor
    void setdata();
};
//declayring and initializing const
num::num()
{
    a=0;
    b=0;
};
//func to set the values
void num::setdata()
{
    cout<<a<<endl<<b<<endl;
}

int main()
{
    num x;
    x.setdata();//will give output 0 0.

    return 0;
}