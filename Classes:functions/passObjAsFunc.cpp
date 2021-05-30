#include <iostream>
using namespace std;

class marks
{
    int a, b;

public:
    void getvalue(int x, int y);
    //writing type of variable ss1 and ss2
    void sum(marks ss1, marks ss2);
};

void marks ::getvalue(int x, int y)
{
    a = x;
    b = y;
};

//adding and printing
void marks ::sum(marks ss1, marks ss2)
{
    a = ss1.a + ss2.a;
    b = ss1.b + ss2.b;

    cout << a << " " << b << endl;
};

int main()
{
    marks s1, s2, sum;

    s1.getvalue(1, 2);
    s2.getvalue(3, 4);
    
    //passing two objects in a function
    sum.sum(s1, s2);

    return 0;
}