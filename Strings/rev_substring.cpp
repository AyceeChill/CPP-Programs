#include <iostream>
using namespace std;
int main()
{
    string s;

    cin >> s;

    int i = 0;
    int j = s.size() - 1;

    if (s[i] != s[j])
    {
        cout << "no" << endl;
    }
    else
    {
        cout << "yes" << endl;
    }

    return 0;
}