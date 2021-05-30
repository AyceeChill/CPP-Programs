#include <iostream>
using namespace std;

string func(string a)
{
    bool upper;
    {
        if (a[0] >= 'A' && a[0] <= 'Z')
        {
            upper = true;
        }
        else
        {
            upper = false;
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (upper)
        {
            if (a[i] >= 'A' && a[i] <= 'Z')
                a[i] = a[i] + 32;
        }
        else
        {
            if (a[i] >= 'a' && a[i] <= 'z')
                a[i] = a[i] - 32;
        }
    }
    return a;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;

        cin >> s;

        cout << func(s) << endl;
    }

    return 0;
}