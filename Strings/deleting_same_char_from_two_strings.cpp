#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a = "abcdefgh";
    string b = "abeijk";

    string c = "";

    for (int i = 0; i < b.size(); i++)
    {
        int j = 0;
        for (j = 0; j < a.size(); i++)
        {
            if (b[i] == a[j])
            {
                c = c + b[i];
                break;
            }
        }
    }

    for (char d : c) //c give access to char variable d to compare its char until null
    {
        a.erase(remove(a.begin(), a.end(), d), a.end()); //remove selects the char to be removed and erase func removes them from the string
    }

    cout << a << endl;

    return 0;
}