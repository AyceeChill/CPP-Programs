#include <iostream>
using namespace std;
//declayring class to use in func to this class
class y;

class x
{
private:
    int a;

public:
    void setdata(int f);
    friend void sum(x, y);//friend func made 
};

class y
{
private:
    int b;

public:
    void setdata(int g);
    friend void sum(x, y);//friend func made
};

void x::setdata(int f)
{
    a=f;
};

void y::setdata(int g)
{
    b=g;
};

void sum(x p, y q)//friend func to add two private data of two classes
{
    cout<<p.a + q.b<<endl;
};

int main()
{
    x a1;
    y b1;

    a1.setdata(3);//initializing values to private data
    b1.setdata(4);

    sum(a1,b1);//friend func called

    return 0;
}
