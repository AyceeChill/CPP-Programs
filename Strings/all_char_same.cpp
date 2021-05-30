#include <iostream>
using namespace std;

bool check(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[0] != s[i])
        {
            return false;
        }
    }
    return true;
};

int main()
{
    string S = "aabbcc";

    if (check(S))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}