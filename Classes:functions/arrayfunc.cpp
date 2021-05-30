//using obj as array 

#include <iostream>
using namespace std;
#define N 10

class a
{
private:
    int x;

public:
    void setvalue()
    {
        cin >> x;
    };
    void getvalue() { cout << x << " "; };
};

int main()
{
    //declayering array

    a a1[N];

    cout << "enter array of "<<N<<" numbers." << endl;

    //looping to get value

    for (int i = 0; i < N; i++)
    {
        a1[i].setvalue();
    }
    cout << "values entered are." << endl;

    //looping to print value

    for (int i = 0; i < N; i++)
    {
        a1[i].getvalue();
    }

    return 0;
}
