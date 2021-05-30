#include <iostream>
using namespace std;

void Xfunc(int x)
{
    try
    {
        if (x == 0)
        {
            throw 1;
        }

        if (x == 1)
        {
            throw 'a';
        }

        if (x == 2)
        {
            throw 2.667;
        }

        if (x == 3)
        {
            throw "catch em all";
        }
    }
    catch (...) //this will catch all type of exeptions
    {
        cout << "caught one." << endl;
    }
}

int main()
{
    Xfunc(0);
    Xfunc(1);
    Xfunc(2);
    Xfunc(3);

    return 0;
}