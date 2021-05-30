#include <iostream>
using namespace std;

class base
{
private:
public:
    int a, b;
    base(){};
    int add()
    {
        return (a + b);
    };
};

class derived : private base
{
public:
    base ::a;
    base ::b;
    base ::add;

    derived(int x, int y)
    {
        a = x;
        b = y;
    };
    void display()
    {
        cout << a << " " << b << endl;
    };
};

int main()
{
    int a;
    derived obj(3, 4);

    obj.display();
    a = obj.add();

    cout << a << endl;

    return 0;
}
