#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a = "123";
    string b = "456";

    int n, m;

    n = stoi(a); //func to convert string in integer
    m = stoi(b);

    int z = n + m;

    cout << z << endl;

}