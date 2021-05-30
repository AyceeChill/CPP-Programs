//in this program we will make virtual classes 
//and we will resolve an ambiguity of inheriting data members of base class to two derived classes
//witout virtual base class the data members will be included twice 

#include <iostream>
#include <string>
using namespace std;

class student
{
protected:
    int roll_no;
    string name;

public:
    void setdata(int x, char *y)
    {
        roll_no = x;
        name = y;
    };
    void getdata()
    {
        cout << "Roll No: " << roll_no << " Name: " << name << endl;
    }
};

//the protected data members of base will be protected to this class
class academic : virtual public student //making base class virtual
{
protected:
    int math, science;

public:
    void setmarks(int x, int y)
    {
        math = x;
        science = y;
    };
    void getmarks()
    {
        cout << "maths = " << math << " science = " << science << endl;
    };
};

//the protected data members of base will be protected to this class
class atheletic : virtual public student //making base class virtual
{
protected:
    float score;

public:
    void setscore(float x)
    {
        score = x;
    };
    void getscore()
    {
        cout << "score = " << score << endl;
    };
};

class result : public academic, public atheletic 
{
public:
    void getresult()
    {
        cout << "Student data." << endl;

        getdata();
        getmarks();
        getscore();
    };
};

int main()
{
    result obj;

    obj.setdata(30, "Abc");
    obj.setmarks(90, 95);
    obj.setscore(9.5);

    obj.getresult();

    return 0;
}
