#include <iostream>
using namespace std;

void check(int x)
{
    cout << "inside Func Check value is " << x << endl;

    if (x == 2)
        throw x;
};

int main()
{
    try
    {
        cout << "inside try." << endl;
        check(0);
        check(1);
        check(2);
        check(3);
    }
    catch (int i)
    {
        cout << "exeption caught " << i << endl;
    }

    return 0;
}