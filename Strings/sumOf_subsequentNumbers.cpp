#include <iostream>
#include <math.h>
using namespace std;
#define N 1000

int subsequenceSum(string s)
{
    int len = s.length();
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        sum = sum + (s[i] - '0'); //to exclude the the garbage value null value and char or special symbols
    }

    return sum * pow(2, len - 1); //the subsequent sum of a integer string is sum of all elements multiply by the square of all elements excluding the last
};

int main()
{
    string a;

    cout << "enter a string." << endl;
    cin >> a;

    cout << "the sum of subsequent numbers is." << endl;
    cout << subsequenceSum(a) << endl;

    return 0;
}