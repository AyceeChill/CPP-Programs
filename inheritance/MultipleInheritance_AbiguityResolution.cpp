//In this program we will use multiple inheritance and resolve ambiguity

#include <iostream>
using namespace std;

class base1
{

public:
    void greetings()
    {
        cout << "Hello." << endl;
    };
};

class base2
{

public:
    void greetings()
    {
        cout << "Bojour." << endl;
    };
};

class derived : public base1, public base2 //A class which is derived from both base1 and base2
{

public:
    void greetings()
    {
        base1::greetings(); //Ambiguity is resolved by scope resolution now the output will be printed of base1
    }
};

int main()
{
    derived obj;

    obj.greetings();

    return 0;
}
