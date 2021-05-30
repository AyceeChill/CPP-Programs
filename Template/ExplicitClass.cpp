#include <iostream>
using namespace std;

template <class type>
class sample
{
private:
    type a;

public:
    sample(type x)
    {
        a = x;
    }
    void show()
    {
        cout << "In generic class " << a << endl;
    }
};
//when the class type is int this explicit class will be in use
template <>
class sample<int>
{
private:
    int a;

public:
    sample(int x)
    {
        a = x * x;
    }
    void show()
    {
        cout << "In explicit class " << a << endl;
    }
};

int main()
{
    sample<double> obj(2.45);
    obj.show();
    sample<int> obj1(2);
    obj1.show();

    return 0;
}
