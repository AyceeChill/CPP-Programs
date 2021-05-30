#include <iostream>
using namespace std;

class x
{

public:
    x(){};
    static char a[30];

    char &replace(int i) //this func returns a refrence of the modified value at space
    {
        return a[i];
    };
};
char x::a[30] = "Atharv Choudhary";

int main()
{
    int i;
    x obj;

    obj.replace(6) = 'x'; //giving the path of space and a char to replace it

    cout << obj.a << endl;//printing the string

    return 0;
}
