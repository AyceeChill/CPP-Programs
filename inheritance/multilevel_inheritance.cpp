//this programs shows a multilevel inheritance
#include <iostream>
using namespace std;

class student//base class
{
protected:
    int rollnum;

public:
    void setrollnum(int x)
    {
        rollnum = x;
    };
    void getrollnum()
    {
        cout << "Roll No. " << rollnum << endl;
    };
};

//second inherited class this class can access the protected data of base becouse of public visibility status
class exam : public student
{
protected:
    int marks;
    char sub[10];

public:
    void setdata(int x, char *y)
    {
        marks = x;
        strcpy(sub, y);
    };
    void getmarks()
    {
        cout << "Subject " << sub << endl;
        cout << "Marks " << marks << endl;
    };
};

//this inherited class can use the base protected data and previous protected data
class result : public exam 
{
public:
    void display()
    {
        getrollnum();
        getmarks();
    };
};

int main()
{
    result a;

    a.setrollnum(23445);
    a.setdata(90, "Maths");
    a.display();

    return 0;
}
