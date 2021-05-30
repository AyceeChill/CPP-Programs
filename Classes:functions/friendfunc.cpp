#include <iostream>
using namespace std;

class friendfunc
{
private:
    int a, b;

public:
    friend int sum(friendfunc x);//adding a friend func
    void getdata(int x, int y);
};

int sum(friendfunc x)//declaring friend func
{
    return x.a + x.b;//adding 
};

void friendfunc::getdata(int x, int y)
{
    a = x;
    b = y;
};

int main()
{
    friendfunc r;

    r.getdata(3, 4);//initializing data for class

    cout<<sum(r)<<endl;//printing addition with friend func

    return 0;
}
