#include <iostream>
using namespace std;
int main()
{
    cout << "in main." << endl;
    try
    {
        cout << "inside try." << endl;
        throw 100;
        cout << "after throw no statement will get executed." << endl;
    }
    catch (int i)
    {
        cout << "exception caught the value is " << i << endl;
    }

    cout << "end" << endl;

    return 0;
}