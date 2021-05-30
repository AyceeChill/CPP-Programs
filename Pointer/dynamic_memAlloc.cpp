#include <iostream>
using namespace std;
//dynamic memory allocation via new and delete
int main()
{
    int a = 10, k = 10;

    int *p = &a, *q, *arr;

    try
    {
        q = new int(20);
    }
    catch (bad_alloc xa)
    {
        cout << "bad mem alloc." << endl;
        return 1;
    }

    try
    {
        arr = new int[3];
    }
    catch (bad_alloc xa)
    {
        cout << "bad mem alloc." << endl;
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i] = k;
        k++;
    }

    cout << "value at p " << (*p) << endl;
    cout << "value at q " << (*q) << endl;
    cout << "values in arr " << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    delete[] arr;
    delete p;
    delete q;

    return 0;
}