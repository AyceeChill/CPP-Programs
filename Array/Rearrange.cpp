#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int size = 5;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    sort(a, a + size); //sorting in accending

    int b[size];

    int min = 0;
    int max = size - 1;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0) //will store the min vlaues at even places
        {
            b[i] = a[min];
            min++;
        }
        else //will store max values at odd places
        {
            b[i] = a[max];
            max--;
        }
    }

    cout << b << endl;

    return 0;
}