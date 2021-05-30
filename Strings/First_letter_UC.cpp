#include <iostream>
using namespace std;
int main()
{
    string a = "A Bcde F Ghijk";

    for (int i = 0; i < a.size(); i++)
    {
        if (i == 0 && a[i] != ' ' || a[i - 1] == ' ' && a[i] != ' ')
        {
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                a[i] = a[i] - 32;
            }
        }
    }

    cout << a << endl;

    return 0;
}