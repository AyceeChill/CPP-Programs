//a program to find address of an overloaded func

#include <iostream>
using namespace std;

int num(int x)
{
    return x;
};

int num(int x, int y = 10)
{
    return x * y;
};

int main()
{
    int (*p)(int x);//a pointer function which will point to another int func
    // int (*p)(int x, int y); this declaration will invoke num(int x, int y); func 

    p = num;//p now points to num(int x) func 

    //integer func needs to print the data via c out since it returns a value

    cout<<p(5)<<endl;//intialization along print 

    return 0;
}