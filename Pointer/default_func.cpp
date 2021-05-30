//a program to indent a string after spaces

#include <iostream>
#include <cstring>
using namespace std;

void iputs(char *str, int indent)//string indent func
{
    if (indent <= 0)//if the indent len is <=0 it will not indent
        indent = 0;

    else
        for (; indent > 0; indent--)//loop to indent the string after spaces
        {
            cout << " ";
        }

    cout << str << endl;
};

int main()
{

    iputs("abcd efgh", 5);
    iputs("xyz pqr", 0);
    iputs("xyz pqr", -1);
    iputs("xyz pqr", 10);

    return 0;
}
