//a program that turns the number negetive

#include <iostream>
using namespace std;

class data
{
private:
    int a;

public:
    data(int x) //constructor made.
    {
        cout << "const called." << endl;
        num = a;
    };
    ~data() //destructor made.
    {
        cout << "destructor called." << endl;
    };

    int num;

    void neg(data &obj);

};

void data::neg(data &obj)//taking the refrence of object 
    {
        obj.num = -obj.num;//accessing the public data via refrence of the object
    };

int main()
{
    data obj1(1);//constructor called

    obj1.num=10; //initializing the public data

    obj1.neg(obj1);//invoking the neg func via obj1 and sending the ref to the func

    cout<<obj1.num<<endl;//printting after invoking the public data 

    //destructor will be called to destroy the constructed data 1
    //but the destructor wont be called to destroy the data that is created in func

    return 0;
}
