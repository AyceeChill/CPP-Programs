#include <iostream>
using namespace std;
int main()
{
    string s = "abcde";
    string a = "";

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (j < i)
            {
                a = a + '.';
            }
            else
            {
                a = a + s[j];
            }
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
        if ((i + 1) % s.size() == 0) //i+1 to print the next space when i+1 > s.size() only then it will be == 0
            cout << endl;
    }

    return 0;
}