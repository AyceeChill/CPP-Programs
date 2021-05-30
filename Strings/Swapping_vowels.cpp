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
    string s = "CppaeiouZ";

    int beg = 0;
    int end = s.size();

    while (beg < end)
    {
        if (!vchk(s[beg]))
        {
            beg++;
            continue; //will break to next loop
        }
        if (!vchk(s[end]))
        {
            end--;
            continue; //will break to while loop
        }
        swap(s[beg], s[end]);
        beg++;
        end--;
    }

    cout << s << endl;

    return 0;
}