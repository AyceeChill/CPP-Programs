#include <iostream>
using namespace std;

class clss
{

public:
    int num;
    clss(){};
    clss(int x)
    {
        num = x;
    };
    int double_val()//func to double the number
    {
        int val;
        val = num + num;
        return val;
    };
};

int main()
{
    int clss::*data;        //declayering a pointer data member to the class to store the data
    int (clss::*doubled)(); //declayering a pointer func to the class which does the calculation

    data = &clss::num;            //now the data will become the adress holder of num
    doubled = &clss::double_val; //same

    clss obj1(2),obj2(4);

    cout<<"numbers before."<<endl;

    cout << obj1.*data << " " << obj2.*data << endl;//showing numbers through the pointer 

    cout<<"numbers doubled."<<endl;

    //to call the pointer func by value we need to enclose the func and obj in brackets
    cout << (obj1.*doubled)() << " " << (obj2.*doubled)() << endl;//calling value stored in a class func by the pointer func

    return 0;
}