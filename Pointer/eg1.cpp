//pointer to the object

#include <iostream>
using namespace std;

class a
{
private:
    int data;

public:
    a(int x);      //const made to get int value
    void getdata(); //func to get the int data
};
a::a(int x) { data = x; }; //declayering const

void a::getdata() { cout<< data<<endl; };

int main()
{
    a ob(3),*p; //initializing const 
    p=&ob; //address of the object to the pointer

    p->getdata();

    return 0;
}
