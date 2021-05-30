#include <iostream>
using namespace std;
int main()
{
    string s = "abcdefgh";

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = i; j < s.size(); j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << s[k];
            }
            cout << endl;
        }
    }

    return 0;
}