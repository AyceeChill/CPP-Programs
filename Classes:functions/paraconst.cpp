//program for parameterized const

#include<iostream>
using namespace std;

class paraconst
{
private:
    int a,b;
public:
    paraconst(int x,int y);//making a para const
    void setdata();
    
};

paraconst::paraconst(int x,int y)//declayring
{
    a=x;
    b=y;

};

void paraconst::setdata()
{
    cout<<a<<endl<<b<<endl;
};

int main()
{
    paraconst r(3,4);//initializing para const
    
    r.setdata();


return 0;
}


