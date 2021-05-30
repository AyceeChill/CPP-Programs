#include <iostream>
using namespace std;

int main()
{
    string a = "01230";

    int b = a[0] - '0';

    for (int i = 0; i < a.size(); i++)
    {
        b = max(b * (a[i] - '0'), b + (a[i] - '0'));
    }

    cout << b << endl;

    return 0;
}