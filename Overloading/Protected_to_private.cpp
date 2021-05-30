#include <iostream>
using namespace std;

class clsa
{
protected:
    int a;
    int b;

public:
    clsa(){};
    void setdataa(int x, int y)
    {
        a = x;
        b = y;
    };
    void getdataa()
    {
        cout << a << " " << b << endl;
    };
};
//derived class : base class
//if-> class derived : private base then the public data will become private and wont be able to access by the compiler 
class clsb : protected clsa //the protected data of clsa is protected to this class
{
    int c;

public:
    clsb(){};
    void setdatab()
    {
        setdataa(3, 4);
        c = a * b; //allowed
    };
    void getdatab()
    {
        cout << a << " multiply by " << b << " is " << c << endl;
    };
};

int main()
{
    clsb obj;

    obj.setdatab();//declaration
    obj.getdatab();

    return 0;
}
