#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    vector<char> a(5);

    for (int i = 0; i < 5; i++)
    {
        a[i] = i + 'a';
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        a.push_back(i + 5 + 'a');
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < a.size(); i++)
    {
        a[i] = toupper(a[i]);
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    //iterator
    vector<char>::iterator p = a.begin();
    p += 2; //points to 2nd position

    a.insert(p, 4, 'x');

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    p = a.begin();
    p += 2;

    a.erase(p, p + 4);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    
    cout << endl;

    return 0;
}
