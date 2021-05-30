#include <iostream>
using namespace std;
//if the marks entered is less than 38 no grace marks are given
//if the next multiple of 5 of the marks minus the marks is less than 3 then that number will be grace

int main()
{
    int n;
    cin >> n; //enter number of marks
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m; //enter marks

        if (m < 38)
        {
            cout << m << endl;
            continue; //to send to next iteration
        }
        int rem;
        rem = m % 5;     //getting thr remainder
        if (5 - rem < 3) //if the remainder is 2 or 1 then it will be graced
        {
            cout << m + 5 - rem << endl;
        }
        cout << m << endl;
    }

    return 0;
}