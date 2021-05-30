#include <iostream>
using namespace std;

long long diff(long long N)
{
    int r, l = 1;
    long long n = 0, k;
    k = N;
    while (N > 0)
    {
        r = N % 10;
        if (r == 6)
            r = r + 3;
        n = n + r * l;
        l = l * 10;
        N = N / 10;
    }

    return (n - k);
};

int main()
{
    long n;

    cin >> n;
    while (n--)
    {
        long long n1;

        cin >> n1;
        cout << diff(n1) << endl;
    }

    return 0;
}