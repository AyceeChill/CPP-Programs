#include <iostream>
using namespace std;

int EvenOdd(string n1, string n2)
{
    int n = n1[n1.size() - 1] - '0';
    int m = n2[n2.size() - 1] - '0';

    int r = n * m;

    return ((r % 2 == 0) ? 1 : 0);
};

int main()
{
    string a, b;

    cin >> a >> b;

    cout << EvenOdd(a, b) << endl;

    return 0;
}