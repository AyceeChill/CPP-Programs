#include <iostream>

using namespace std;

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int d, m, y;
    int d1, m1, y1;
    
    cin >> d >> m >> y;
    cin >> d1 >> m1 >> y1;

    int fine = 0;

    if (y - y1 > 0)
    {
        fine = 10000;
    }
    else if (m - m1 > 0 && y == y1)
    {
        fine = 500 * (m - m1);
    }
    else if (d - d1 > 0 && m == m1 && y == y1)
    {
        fine = 15 * (d - d1);
    }

    cout << fine << endl;

    return 0;
}
