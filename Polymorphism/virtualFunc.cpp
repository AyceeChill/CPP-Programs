//this program resolves the ambiguity of calling the func by a pointer to object of derived class

#include <iostream>
using namespace std;

class base
{
private:
public:
    virtual void func() //virtual func is created
    {
        cout << "Base's virtual function." << endl;
    };
};

class derived1 : public base //virtual func is inherited once
{
private:
public:
    void func() //while calling this func at run time or at compilation it wont be ambiguos
    {
        cout << "derived1's func." << endl;
    };
};

class derived2 : public base
{
private:
public:
    void func()
    {
        cout << "derived2's func." << endl;
    };
};

int main()
{
    base *p, obj; //base class pointer and object
    derived1 objd1;
    derived2 objd2;

    p = &obj;  //poiter to object
    p->func(); //pointer to func

    p = &objd1;
    p->func();

    p = &objd2;
    p->func();

    return 0;
}
