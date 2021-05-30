#include <iostream>
using namespace std;

int RedOrGreen(int N, string S)
{
    int r = 0, g = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'R')
        {
            r++;
        }
        else
        {
            g++;
        }
    }

    if (r > g)
    {
        return g;
    }
    else
    {
        return r;
    }
};

int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        string s;
        int n;

        cin >> n;

        cin >> s;

        cout << RedOrGreen(n, s) << endl;
    }

    return 0;
}