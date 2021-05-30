#include <iostream>
using namespace std;

class base
{
public:
    int a;
};

class derived : public base
{
public:
    int b;
};

int main()
{
    derived obj;
    try
    {
        throw obj;
    }
    catch (derived x)
    {
        cout << "This will execute." << endl;
    }
    catch (base x)
    {
        cout << "this will not." << endl;
    }

    return 0;
}
