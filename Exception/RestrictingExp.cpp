#include <iostream>
using namespace std;

void Xfunc(int x) throw(int, char, double) //now this func will only throw these selected exeptions
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
        throw 2.809;
    }
}

int main()
{
    try
    {
        Xfunc(2);
    }
    catch (...)
    {
        cout << "caught one." << endl;
    }

    return 0;
}