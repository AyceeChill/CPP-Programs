//creating a member operating func to overload a operator

#include <iostream>
using namespace std;

class location
{
private:
    int longitude;
    int latitude;

public:
    location(){};
    location(int x, int y)
    {
        longitude = x;
        latitude = y;
    };
    void display()
    {
        cout << "longitude " << longitude << " "
             << "latitude " << latitude << endl;
    };
    location operator+(location op2) //declaring and defining an member operator it will take the value of the second class object
    {
        location temp;                         //a new class variable to store the new value
        temp.longitude = op2.longitude + longitude; //adding the values of both initializations
        temp.latitude = op2.latitude + latitude;
        return temp;

    }; //after this defination we can add two class objects
};

int main()
{
    location ob1(3, 4), ob2(5, 6);

    ob1.display();
    cout << endl;
    ob2.display();
    cout << endl;

    ob1 = ob1 + ob2; //adding two objects

    ob1.display();
    cout << endl;

    return 0;
}
