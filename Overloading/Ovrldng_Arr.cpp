#include <iostream>
using namespace std;

class num
{
private:
    int a[3];

public:
    num(int i, int j, int k)
    {
        a[0] = i;
        a[1] = j;
        a[2] = k;
    };

    int operator[](int i) //operator overloading of [] which will return the values stored at a[i] when called
    {
        return a[i];
    };
};

int main()
{
    num ob1(10, 11, 12);

    cout << ob1[1] << endl; //printing value

    return 0;
}
