#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; //enter number of matrix nxn
    int t = n;
    int a[n][n];
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    //if a row or collumn have 0 make the whole row and collumn 0

    for (int i = 0; i < n; i++) //marking the element to be destroyed with -1
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                for (int k = 0; k < n; k++)
                {
                    a[i][k] = -1;
                }
                for (int l = 0; l < n; l++)
                {
                    a[l][j] = -1;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) //replacing -1 with 0
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == -1)
            {
                a[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}