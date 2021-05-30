#include <iostream>
using namespace std;

class tri
{
public:
    void tridown(string S)
    {
        int n = S.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << ".";
            }
            for (int k = 0; k <= i; k++)
            {
                cout << S[k];
            }
            cout << endl;
        }
    };
};

int main()
{
    tri obj;
    int t;
    cin >> t;

    while (t--)
    {
        string s;

        cin >> s;
        obj.tridown(s);
    }

    return 0;
}