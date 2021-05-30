#include <iostream>
using namespace std;

bool vchk(char chk)
{
    return (chk == 'a' || chk == 'e' ||
            chk == 'i' || chk == 'o' ||
            chk == 'u' || chk == 'A' ||
            chk == 'E' || chk == 'I' ||
            chk == 'O' || chk == 'U');
};

int main()
{
    string S = "abceiousfgac";
    string temp = "";

    for (int i = 0; i < S.size(); i++)
    {
        if (!vchk(S[i]))
        {
            temp = temp + S[i];
        }
    }
    cout << temp << endl;

    return 0;
}