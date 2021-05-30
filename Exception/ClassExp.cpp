#include <iostream>
using namespace std;

class ClassExp
{
private:
public:
    char err[10];
    int val;

    ClassExp()
    {
        *err = 0;
        val = 0;
    };
    ClassExp(char *s, int x)
    {
        strcpy(err, s);
        val = x;
    };
};

int main()
{
    int i;

    try
    {
        cout << "enter a int number." << endl;
        cin >> i;

        if (i < 0)
        {
            throw ClassExp("Negetive", i);
        }
    }
    catch (ClassExp x) //this section catches the name of func that contains info and an object of class to access that info
    {
        cout << x.err << " " << x.val << endl;
    }

    return 0;
}
