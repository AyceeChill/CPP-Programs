#include <iostream>
using namespace std;

class arith
{
private:
    int a;
    int b;

public:
    arith(){};
    arith(int x, int y)
    {
        a = x;
        b = y;
    };
    arith operator+(arith op2)
    {
        arith temp;
        temp.a = op2.a + a;
        temp.b = op2.b + b;
        return temp;
    };

    arith operator-(arith op2)
    {
        arith temp;
        temp.a = a - op2.a;
        temp.b = b - op2.b;
        return temp;
    };

    arith operator=(arith op2)
    {
        a = op2.a;
        b = op2.b;
        return *this; //returns the value of object this func is called with
    };

    arith operator++() //overloading for prefix
    {
        a++;
        b++;
        return *this; //returns the value of object this func is called with
    };

    void display()
    {
        cout << a << " " << b << endl;
    };
};

int main()
{
    arith ob1(1, 2), ob2(3, 4);

    cout << "Addition." << endl;

    ob1.display();
    ob2.display();

    ob1 = ob1 + ob2;
    ob1.display();

    cout << "Subtraction." << endl;

    ob1.display();
    ob2.display();

    ob1 = ob1 - ob2;
    ob1.display();

    cout << "Equalization." << endl;

    ob1.display();
    ob2.display();

    ob1 = ob2;
    ob1.display();

    cout << "Equalization." << endl;

    ob1.display();
    ob2.display();

    ob1 = ob2;
    ob1.display();

    

    cout << "Increment." << endl;

    ob1.display();
    ob2.display();

    ++ob1;
    ++ob2;

    ob1.display();
    ob2.display();

    return 0;
}