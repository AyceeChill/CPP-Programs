#include <iostream>
#include <string>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s)
{
    if (s[8] == 'A')
    {
        if (s[0] == '1' && s[1] == '2')
        {
            return ("00" + s.substr(2, 6));
        }
        else
        {
            return s.substr(0, 8);
        }
    }
    else
    {
        if (s[0] == '1' && s[1] == '2')
        {
            return s.substr(0, 8);
        }
        else
        {
            int c = 12 + stoi(s.substr(0, 2));
            return (to_string(c) + s.substr(2, 6));
        }
    }
}

int main()
{

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    return 0;
}
