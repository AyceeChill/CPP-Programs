//This program resolves the ambiguity of calling the func by a refrence to object of derived class

#include <iostream>
using namespace std;

class base
{
private:
public:
    virtual void func() //Virtual func is created
    {
        cout << "Base's virtual function." << endl;
    };
};

class derived1 : public base //Virtual func is inherited once
{
private:
public:
    void func() //While calling this func at run time or at compilation it wont be ambiguos
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

void f(base &a) //passing the reference of the base type object to a func to call the functions
{
    a.func();
}

int main()
{
    base obj; 
    derived1 objd1;
    derived2 objd2;

    f(obj);
    f(objd1);
    f(objd2);

    return 0;
}