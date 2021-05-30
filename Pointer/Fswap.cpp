//swapping the private data of two classes

#include <iostream>
using namespace std;

//declayring the class to use in func

class y;
class x
{

private:
    int a;

public:
    void setvalue(int a2) { a = a2; };
    void getvalue() { cout << a << endl; };

    //adding friend func
    friend void swap(x &, y &);
};

class y
{

private:
    int b;

public:
    void setvalue(int b2) { b = b2; };
    void getvalue() { cout << b << endl; };

    //adding friend func
    friend void swap(x &, y &);
};

//function declaration to swap
//call by refrence

void swap(x &p, y &q)
{
    int temp = 0;
    temp = p.a;
    p.a = q.b;
    q.b = temp;
};

int main()
{
    x a1;
    y b1;

    a1.setvalue(3);
    b1.setvalue(4);

    cout << "before swap." << endl;

    a1.getvalue();
    b1.getvalue();

    swap(a1, b1);

    cout << "after swap." << endl;

    a1.getvalue();
    b1.getvalue();

    return 0;
}
