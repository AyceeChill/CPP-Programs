#include <iostream>
using namespace std;

template <class X, class Y>
void add(X x, Y y)
{
    cout << x << " " << y << endl;
}

int main()
{
    add(2, 3);
    add(10, 20);
    add(22, "twenty two");

    return 0;
}