#include <iostream>
using namespace std;

class num
{
private:
    int a, b;

public:
    //adding and initializing const
    num(int x, int y)
    {
        a = x;
        b = y;
    };

    //adding and initilizing destructor
    ~num()
    {
        cout << "dest called." << endl;
    };
    void setdata();
};

void num::setdata()
{
    cout << a << endl
         << b << endl;
}

int main()
{
    //const will be called

    num r(3, 4);//initialing values to const

    r.setdata();//will give out values 3 4

    {
        num s(4, 5); //initializing values

        s.setdata(); //will give out values 4 5
    }
    //destructor called

    num f(5, 6);//initializing values

    f.setdata();//const called value will be 5 6
    r.setdata();//const called value will be 3 4

    //
    //two dest called for last two values of diff objects

    return 0;
}