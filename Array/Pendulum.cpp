#include <iostream>
using namespace std;
int main()
{
    int n = 5; //size

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n); //sort in accend

    int b[n];

    int mid = (n - 1) / 2; //the mid of the array

    b[mid] = a[0]; //smallest elelment in the mid

    int i = 1, j = 1; //itirate from 1

    for (i = 1; i <= mid; i++) //loop till the half elements
    {
        b[mid + i] = a[j++]; //the next from mid will have the value at index 1 then increment
        b[mid - 1] = a[j++]; //the previous from mid will have the value at index 2 then increment
    }

    if (n % 2 == 0) //if the size is even then after the upper loop one value will get left behind
    {
        b[mid + i] = a[j]; //store it in last
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}