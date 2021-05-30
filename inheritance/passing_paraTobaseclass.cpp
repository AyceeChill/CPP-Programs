//in this program we use inherited class's const to initialize the base class object

#include <iostream>
using namespace std;

class base
{
protected:
    int a;

public:
    base(int x)
    {
        a = x;
        cout << "base const called." << endl;
    };
    ~base()
    {
        cout << "base dest called." << endl;
    };
};
class base2
{
protected:
    int b;

public:
    base2(int x)
    {
        b = x;
        cout << "base2 const called." << endl;
    };
    ~base2()
    {
        cout << "base2 dest called." << endl;
    };
};
class derived : public base, public base2
{
protected:
    int c;

public:
    //the derived class is using the x and y and to send the value to base class const we use : base(y),base2(z)
    //if the const of derived takes no arguments it would still pass the values to class const
    /*
    derived(int y, int z) : base(y), base2(z)
    {
        cout << "derived const called." << endl;
    };
    */
    derived(int x, int y, int z) : base(y), base2(z)
    {
        c = x;

        cout << "derived const called." << endl;
    };
    ~derived()
    {
        cout << "derived dest called." << endl;
    };
    void disp()
    {
        cout << a << " " << b << " " << c << endl;
    }
};

int main()
{
    derived obj(3, 4, 5); //initialization of derived class const

    obj.disp();

    return 0;
}

/*
base const called.
base2 const called.
derived const called.
4 5 3
derived dest called.
base2 dest called.
base dest called.
*/
