#include <iostream>
using namespace std;

class student
{
protected:
    int id;
    string name;

public:
    student(int m, string n)
    {
        id = m;
        name = n;
    };
    virtual void display(){};
};

class subject : public student
{
protected:
    string sub;

public:
    subject(string s, int m, string n) : student(m, n)
    {
        sub = s;
    };
    void display()
    {
        cout << "Subject " << sub << endl;
        cout << "ID " << id << endl;
        cout << "Name " << name << endl;
    };
};

class marks : public student
{
protected:
    int mrks;

public:
    marks(int mm, string s, int m, string n) : student(m, n)
    {
        mrks = mm;
    };
    void display()
    {
        cout << "Marks " << mrks << endl;
        cout << "ID " << id << endl;
        cout << "Name " << name << endl;
    };
};

int main()
{
    subject obj("Maths", 1234, "abc");
    obj.display();
    marks obj1(100, "Maths", 1234, "abcd");
    obj1.display();

    cout << endl
         << endl;

    student *obj2[2];

    obj2[0] = &obj;
    obj2[1] = &obj1;

    obj2[0]->display();
    obj2[1]->display();

    return 0;
}
