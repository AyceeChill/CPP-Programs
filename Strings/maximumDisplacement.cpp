#include <iostream>
using namespace std;

string maxdisp(string a)
{
    int xco = 0, yco = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'N')
            yco++;
        if (a[i] == 'E')
            xco++;
        if (a[i] == 'W')
            xco--;
        if (a[i] == 'S')
            yco--;
    }

    int x = 0, y = 0;
    string b = "";

    while (x < xco)
    {
        b += 'E';
        x++;
    }
    while (y < yco)
    {
        b += 'N';
        y++;
    }
    while (x > xco)
    {
        b += 'W';
        x--;
    }
    while (y > yco)
    {
        b += 'S';
        y--;
    }
    return b;
};

int main()
{
    string a = "SSSNEEEW";

    cout << maxdisp(a) << endl;

    return 0;
}