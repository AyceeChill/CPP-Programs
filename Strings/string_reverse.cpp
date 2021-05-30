#include <iostream>
using namespace std;
//return by value
class string_reverse
{
public:
    string rev(string s)
    {
        reverse(s.begin(), s.end());
        return s;
    }
};
//non return
class string_reverse2
{
public:
    void rev(string s)
    {
        for (int i = s.size(); i >= 0; i--)
        {
            cout << s[i];
        }
    }
};
//via swap
class string_reverse3
{
public:
    void rev(string s)
    {
        int n = s.size();
        for (int i = 0; i <= s.size(); i--)
        {
            swap(s[i], s[n - i - 1]);
        }
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

        string_reverse obj;

        cout << obj.rev(S) << endl;
    }
    return 0;
}