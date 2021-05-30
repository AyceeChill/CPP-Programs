#include <iostream>
using namespace std;

class string_odd
{
private:
public:
    string strodd(string s)
    {
        string a = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0)
            {
                a = a + s[i];
            }
        }
        return a;
    }
};

int main()
{

    int t;

    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        string_odd obj;

        cout << obj.strodd(S) << endl;
    }
    return 0;
}
