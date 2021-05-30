#include <iostream>
using namespace std;

class base1
{
private:
    int a;

public:
    base1()
    {
        cout << "base1 const called." << endl;
    };
    ~base1()
    {
        cout << "base1 dest called." << endl;
    };
};

class base2
{
private:
    int a;

public:
    base2()
    {
        cout << "base2 const called." << endl;
    };
    ~base2()
    {
        cout << "base2 dest called." << endl;
    };
};

class derived : public base1, public base2
{
public:
    derived()
    {
        cout << "derived const called." << endl;
    };
    ~derived()
    {
        cout << "derived dest called." << endl;
    };
};

int main()
{
    derived obj;

    return 0;
}

/* 
output will be

base1 const called.
base2 const called.
derived const called.
derived dest called.
base2 dest called.
base1 dest called. 

if class derived : public base2, public base1

then the output will be

base2 const called.
base1 const called.
derived const called.
derived dest called.
base1 dest called.
base2 dest called. 
*/
