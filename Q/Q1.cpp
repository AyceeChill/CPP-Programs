//inputting a string with commas
//printing a string without the commas 

#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();//to get the length of input string

    string temp = "";//creating a temp string 

    for (int i = 0; i < n; i++)//loop till the end of string
    {
        if (s[i] != ',')//if the value does not have comma it will store all char, num and symbol in temp 
        {
            temp = temp + s[i];
        }
        else
        {
            cout << temp << endl;//when the comma is met it will break line 
            temp = "";//and the comma will be replaced
        }
        if (i == n - 1)//when we've traversed through all the string we will print it
        {
            cout << temp;
        }
    }
    return 0;
}
