#include <iostream>
using namespace std;

class base
{
protected:
    int a;

public:
    base()
    {
        cout << "const called base." << endl;
    };
    ~base()
    {
        cout << "dest called base." << endl;
    };
};

class derived : public base
{
    int b;

public:
    derived()
    {
        cout << "const called derived." << endl;
    };
    ~derived()
    {
        cout << "dest called derived." << endl;
    };
};

int main()//the base class const will called first followed by derived class const
{
    derived obj;

    return 0;
}
