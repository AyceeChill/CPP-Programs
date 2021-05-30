#include <iostream>
using namespace std;

class a
{
private:
    int data;

public:
    a() { data = 0; };      //const made data initialized
    a(int x) { data = x; }; //to store data
    void display();         //to get data
};

void a::display() //to display the private data
{
    cout << data << endl;
};

int main()
{
    a ar[3] = {1, 2, 3}, *p; //array object initialized and a pointer is made

    p = ar; //address of the first element to the pointer

    for (int i = 0; i < 3; i++) //loop to display the data
    {
        p->display();
        p++;//to move to the next address
    }

    return 0;
}
