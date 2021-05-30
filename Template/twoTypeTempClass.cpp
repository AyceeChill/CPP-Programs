#include <iostream>
using namespace std;

template <class type1, class type2>
class sample
{
private:
    type1 a;
    type2 b;

public:
    sample(type1 x, type2 y)
    {
        a = x;
        b = y;
    };
    void show()
    {
        cout << "the adiition of data is " << a << " " << b << endl;
    }
};

int main()
{
    sample<int, char> obj(10, 'A');

    obj.show();

    sample<int, char *> obj2(10, "learning everyday.");

    obj2.show();

    return 0;
}
