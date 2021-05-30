//syntax of single inheritance
//program to initialize employee skill and data

#include <cstring>
#include <iostream>
using namespace std;

class employee
{
private:
    int id;

public:
    char name[10];
    employee(){}; //default const imp to make as it will be used for calling the employee class
    employee(int x)
    {
        id = x;
    };

    void display()
    {
        cout << "employee id " << id << endl;
    };
};

//syntax for inheritance
//default visibility mode is private for derived class
/* 
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}} 
*/

class skill : public employee
{
public:
    int lang;
    char l[10];

    skill(){};
    skill(int x, char *y, char *z)
    {
        lang = x;
        strcpy(l, y);
        strcpy(name,z);
    };
    void dispskill()
    {
        cout<<"name "<<name<<" languages learned "<<lang<<endl<<"choice of language "<<l<<endl;

    };
};

int main()
{
    employee id1(43526);

    id1.display();

    skill sk1(3,"C++","Abc");

    sk1.dispskill();

    return 0;
}
