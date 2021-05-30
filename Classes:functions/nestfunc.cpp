//program to take input of the string of binary digits and printing 
//will detect non binary numbers

#include <iostream>
#include <string>
using namespace std;

class number
{
private:
    string a;//taking numbers as string
    void nonb(void);//func to detect non binary no.

public:
    void getnum(void);
    void setnum(void);
};

void number::getnum(void)
{
    cout << "enter a binary string" << endl;
    cin >> a;
};

void number ::nonb(void)//declaration of func to check non bin
{
    for (int i = 0; i <= a.length(); i++)//loop to get to the end of string
    {
        if (a.at(i) != '0' && a.at(i) != '1')//scanning for non binary no.
        {
            cout << "this string is non binary" << endl;
            exit(0); //exiting with zero to end loop 
        }

    }
    
};

void number ::setnum(void)
{
    nonb();
    cout << "the string entered is binary" << endl;
};

int main()
{
    number r;
    r.getnum();
    r.setnum();

    return 0;
}