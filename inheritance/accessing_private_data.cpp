//in this program we will try to access the private data via derived class

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
    int getamt()
    {
        return amt;
    };
    
};

class member : public bank
{
    int addamt;

public:
    int acc;
    int u_id;

    member(int x, int y)
    {
        acc = x;
        u_id = y;
    };

    void getdata()
    {
        cout << acc << " is account number and " << u_id << " is the user id." << endl;
    };

    member(int x)
    {
        addamt = x + getamt();
    };

    void display()
    {
        cout << "Old amount " << getamt() << endl;

        cout << "New amount " << addamt << endl;
    };
};

int main()
{
    member a1(500),a2(25554,56667);

    a2.getdata();
    cout << endl;

    cout << endl;

    a1.display();

    return 0;
}
