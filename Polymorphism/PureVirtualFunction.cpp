//example of pure virtual function which allows to have same properties as virtual func and a property of redefination

#include <iostream>
using namespace std;

class bank
{
protected:
    int empID;
    int amount;
    char name;

public:
    virtual void show() = 0; //this is a pure virtual function
};

class empd1 : public bank
{
public:
    void set()
    {
        cout << "enter the employee ID." << endl;
        cin >> empID;
        cout << "enter the amount." << endl;
        cin >> amount;
        cout << "enter the name." << endl;
        cin >> name;
    }

    void show() //defination for pure virtual func
    {
        cout << empID << " " << amount << " " << name << endl;
    }
};

class empd2 : public bank
{
public:
    void set()
    {
        cout << "enter the employee ID." << endl;
        cin >> empID;
        cout << "enter the amount." << endl;
        cin >> amount;
        cout << "enter the name." << endl;
        cin >> name;
    }

    void show()
    {
        cout << empID << " " << amount << " " << name << endl;
    }
};

class empd3 : public bank
{
public:
    void set()
    {
        cout << "enter the employee ID." << endl;
        cin >> empID;
        cout << "enter the amount." << endl;
        cin >> amount;
        cout << "enter the name." << endl;
        cin >> name;
    }

    void show()
    {
        cout << empID << " " << amount << " " << name << endl;
    }
};

int main()
{
    empd1 a;
    empd2 b;
    empd3 c;

    a.set();
    b.set();
    c.set();

    a.show();
    b.show();
    c.show();

    return 0;
}