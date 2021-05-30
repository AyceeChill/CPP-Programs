#include <iostream>
using namespace std;

int main()
{
    string s = "76945";
    int a = 0;
    int b = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            a = a + s[i] - '0';
        }
        else
        {
            b = b + s[i] - '0';
        }
    }

    cout << (abs(b - a) % 11 == 0 ? 1 : 0) << endl;

    return 0;
}