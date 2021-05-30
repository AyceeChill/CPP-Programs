#include <iostream>
using namespace std;

void Xfunc(int x)
{
    try
    {
        throw x;
    }
    catch (int y)
    {
        cout << "caught in func." << endl;
        throw; //this will throw the exeption out of the func and out of the try func in main
    }
}

int main()
{
    try
    {
        Xfunc(1);
    }
    catch (int z)
    {
        cout << "caught in main." << endl;
    }

    return 0;
}