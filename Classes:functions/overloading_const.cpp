//this program overload the constructors while using parsing concept

#include <iostream>
#include <cstdio>
using namespace std;

class date
{

private:
    int day, month, year;

public:
    date(){};     //default const
    //date(char x[10]){sscanf(x, "%d/%d/%d", &day, &month, &year);};//parsing of char string

    date(int x, int y, int z)
    {
        day = x;
        month = y;
        year = z;
    };
    void getvalue(){scanf("%d/%d/%d", &day, &month, &year); };//parsing of string via Keyboard input

    void display()
    {
        cout << "enterred date is." << endl;
        cout << day << "/" << month << "/" << year<<endl;
    };
};

int main()
{
    date a1(20, 8, 1998),a2; //a2("19/07/1997");

    a1.display();
    //a2.display();
    a2.getvalue();
    a2.display();

    return 0;
}