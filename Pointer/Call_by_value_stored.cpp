#include <iostream>
using namespace std;

class clss
{
private:
public:
    int data; //the data needs to be public to call its value by a pointer
    clss() { data = 0; };
    clss(int x) { data = x; };
    void display();
};

void clss::display() { cout << data << endl; };
int main()
{
    clss a1(3);
    int *p; //integer pointer

    p = &a1.data; //storing its address

    cout << *p << endl; //calling value stored at address

    return 0;
}
