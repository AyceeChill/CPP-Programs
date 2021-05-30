//in this program the constructor will be initialized dynamically

#include <iostream>
#include <new>
#include <cstring>
using namespace std;

class balance
{
private:
    char name[10];
    int bal;

public:
    balance(char *a, int b) //const made
    {
        strcpy(name, a); //method to copy a string in private data is done by taking the address pointer with string address and using strncpy
        bal = b;
    };
    ~balance() //destructor made
        {
            //it will distruct the created data
        };
    void display(char *a, int &b) //we need to pass the refrence value to the vaiable in main to copy data
    {
        strcpy(a, name);
        b = bal;
    };
};

int main()
{
    balance *p; //declyering pointer of balance data type to hold the obj address
    char n[10];
    int b;

    try
    {
        p = new balance("Abc", 1635485); //dynamically created object/constructor is initialized
    }
    catch (bad_alloc a)
    {
        cout << "bad mem alloc!" << endl;
        return 1;
    }

    p->display(n, b);

    cout << n << " have " << b << " balance in account." << endl;

    delete p; //freeing mem

    return 0;
}
