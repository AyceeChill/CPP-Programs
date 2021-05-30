#include <iostream>
using namespace std;

class num
{
private:
    int x;
    int y;

public:
    num(){}; //to store temp value
    num(int a, int b)
    {
        x = a;
        y = b;
    };

    friend num operator+(num op1, num op2) //declayering and defining friend func operator
    {
        num temp;
        //adding
        temp.x = op1.x + op2.x;
        temp.y = op1.y + op2.y;

        return temp;
    };

    void display()
    {
        cout << x << " " << y << endl;
    };
};

int main()
{
    num ob1(1, 2), ob2(3, 4);

    cout << "before addition." << endl;

    ob1.display();
    ob2.display();

    cout << "after addition." << endl;

    ob1 = ob1 + ob2; //adding objects

    ob1.display();

    return 0;
}
