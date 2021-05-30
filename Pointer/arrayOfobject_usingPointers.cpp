#include <iostream>
using namespace std;

class emp
{
private:
    int empID;
    int sal;

public:
    void setdata()
    {
        cout << "enter employee ID and employee salary." << endl;
        cin >> empID >> sal;
    }
    void getdata()
    {
        cout << "employee ID " << empID << " "
             << "employee salary " << sal << endl;
    }
};

int main()
{
    emp *p = new emp[3]; //pointer object array of type emp to store and get different data
    emp *pget = p;       //temp pointer to print the data

    for (int i = 0; i < 3; i++)
    {
        p->setdata();
        p++;
    }

    for (int i = 0; i < 3; i++)
    {
        pget->getdata();
        pget++;
    }

    return 0;
}
