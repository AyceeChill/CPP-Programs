#include <iostream>
using namespace std;
int main()
{
    string a = "abcde fghi j";

    string b = "";

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != ' ')
        {
            b = b + a[i];
        }
    }

    cout << b << endl;

    return 0;
}