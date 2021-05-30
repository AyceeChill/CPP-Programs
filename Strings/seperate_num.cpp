#include <iostream>
using namespace std;
int main()
{
    string s = "asdfg45hfds78j9";

    string temp = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            temp = temp + s[i];
        }
    }

    cout << temp << endl;

    return 0;
}