//in this program we will try to access different data and func via private derived class

#include <iostream>
using namespace std;

class bank
{
private:
    int amt;

public:
    bank()
    {
        amt = 100000;
    };
    int acc=9887;
    int u_id=9876;

    void getdata()
    {
        cout << acc << " is account number and " << u_id << " is the user id." << endl;
    };

    int getamt()
    {
        return amt;
    };
};

class member : private bank
{
    int addamt;

public:

    member(int x)
    {
        addamt = x + getamt();
    };

    void display()
    {
        getdata();

        cout << "Old amount " << getamt() << endl;

        cout << "New amount " << addamt << endl;
    };
};

int main()
{
    member a1(500);

    
    cout << endl;

    cout << endl;

    a1.display();

    return 0;
}
