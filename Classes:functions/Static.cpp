//static func and variable program

#include <iostream>
using namespace std;

class staticc
{
private:
    char name[10];
    static int id;//declayering a static variable

public:
    void getname();
    void setname();
    static void setid();//making a static func
};
int staticc::id = 1000;//initializing static variable
void staticc::getname()  
{
    cout << "enter name." << endl;
    cin >> name;
    id++;//incrimenting the static variable
};
void staticc::setname()
{
    cout << "the name is " << name << endl;
};
void staticc::setid()//declayering a static func to print the static value
{
    cout << "the id is " << id << endl;
};

int main()
{
    staticc r;
    int n;

    cout << "enter num of emp." << endl;
    cin >> n;//number of employees to make a loop
    for (int i = 0; i < n; i++)
    {
        r.getname();
        r.setname();
        r.setid();
    }
    
    return 0;
}
