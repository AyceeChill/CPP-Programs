//in this program we already have a empty const and a default const so we cannot initialize the const dynamically
//we will use an array of class's datatype to fill the data

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
    balance(){};            //empty const
    balance(char *a, int b) //default const
    {
        strcpy(name, a);
        bal = b;
    }
    ~balance(){};                //destructor
    void setdata(char *a, int b) //to set the data via the dynamic array
    {
        strcpy(name, a);
        bal = b;
    };
    void getdata(char *a, int &b) //to print data via main
    {
        strcpy(a, name);
        b = bal;
    };
};

int main()
{
    balance *p;
    char n[10];
    int b;

    try
    {
        p = new balance[3]; //array element no. initialized
    }
    catch (bad_alloc a)
    {
        cout << "bad mem alloc!" << endl;
        return 1;
    }

    //we will use dot operator
    //initializing the elements of array

    p[0].setdata("Abc", 6457283);
    p[1].setdata("Xyz", 6567483);
    p[2].setdata("Pqr", 6465828);

    for (int i = 0; i < 3; i++)
    {
        p[i].getdata(n, b);//getting the data in main

        cout << n << " have " << b << " balance." << endl;//printing the data
    }

    delete p;//freeing mem

    return 0;
}
