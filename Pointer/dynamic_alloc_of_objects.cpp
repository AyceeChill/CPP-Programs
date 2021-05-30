//in this prog the object for a class is created dynamically
//the program takes two values name and bal, and it prints

#include <iostream>
#include <new>
#include <cstring>
using namespace std;

class balance //class is made
{
private:
    char name[10];
    int bal;

public:
    void setdata(char *a, int b) //this func will take the address of string into a pointer to copy it into the private data
    {
        strcpy(name, a);
        bal = b;
    };

    void getdata(char *a, int &c) //will copy the data from private to the variables in main similerly to get data from private to main we need to get refrence of the data
    {
        strcpy(a, name);
        c = bal;
    };
};

int main()
{
    balance *p; //balance data type pointer to hold the class object we are about to make
    char n[10];
    int b;

    try
    {
        p = new balance; //object for class is created dynamically
    }
    catch (bad_alloc a)
    {
        cout << "bad mam alloc!" << endl;
        return 1;
    }

    p->setdata("ABC", 1900982);

    p->getdata(n, b);

    cout << n << " have " << b << " balance in account." << endl;

    delete p;

    return 0;
}
