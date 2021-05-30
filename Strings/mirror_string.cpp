#include <iostream>
using namespace std;

string mirror(string s)
{
    string str = "abcdefghijklmnopqrstuvwxyz"; //a string to compare char

    for (int i = 0; i < s.size(); i++)
    {
        //'z' have larger ascii value than 'a' so to mirror we minus the larger from smaller
        //in return we get the index of a mirror value
        s[i] = str['z' - s[i]];
    }
    return s;
}

int main()
{
    string S = "abcdef";

    cout << mirror(S) << endl;

    return 0;
}