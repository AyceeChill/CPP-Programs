#include <iostream>
using namespace std;

class employee
{

private:
    int a;

public:
    employee(int j);//const made
    int getdata();
};
employee::employee(int j) { a = j; };//const declayered and defined
int employee::getdata() { return a; }//func to return the private value 

int main()
{
    employee a1[3] = {1, 2, 3};//const initialized

    for (int i = 0; i < 3; i++)//loop to get the private data
    {
        cout << a1[i].getdata() << endl;
    }

    return 0;
}