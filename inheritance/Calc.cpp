#include <cmath>
#include <iostream>

using namespace std;

class Calculator
{
protected:
    int a, b;

public:
    Calculator(){};
    void Calculate(int x, int y)
    {
        a = x;
        b = y;
    };

    int plus()
    {
        return (a + b);
    };

    int minus()
    {
        if (a > b)
        {
            return (a - b);
        }
        return (b - a);
    };

    int multi()
    {
        return (a * b);
    };

    int divide()
    {
        return (a / b);
    };
};

class scical : public Calculator
{
public:
    int hypo()
    {
        return (hypot(a, b));
    };

    void expo_a()
    {
        cout << exp(a) << endl;
    };
    void expo_b()
    {
        cout << exp(b) << endl;
    };

    int power()
    {
        return pow(a, b);
    };

    void cube_a()
    {
        cout << cbrt(a) << endl;
    };
    void cube_b()
    {
        cout << cbrt(b) << endl;
    };
};

class result : public scical
{
};

int main()
{
    int x, y, z;
    cout << "Enter two numbers." << endl;
    cin >> x >> y;

    result a;

    a.Calculate(x, y);

    cout << "choose the operation" << endl
         << "1.plus" << endl
         << "2.minus" << endl
         << "3.multi" << endl
         << "4.divide" << endl
         << "5.hypo" << endl
         << "6.expo" << endl
         << "7.power" << endl
         << "8.cube" << endl;

    cin >> z;

    switch (z)
    {
    case 1:
        return a.plus();
        break;
    case 2:
        return a.minus();
        break;
    case 3:
        return a.multi();
        break;
    case 4:
        return a.divide();
        break;
    case 5:
        return a.hypo();
        break;
    case 6:
        cout << a.expo_a() << endl << a.expo_b() << endl;
        break;
    case 7:
        return a.power();
        break;
    case 8:
        cout << a.cube_a() << endl << a.cube_b() << endl;
        break;
    }

    return 0;
}