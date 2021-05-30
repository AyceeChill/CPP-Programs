//a program to compare two numbers via using the concept of this pointer

#include <iostream>
using namespace std;

class clss
{
private:
    int num;

public:
    clss(int num = 0) //a this pointer to set the value to private data of same name variable of the func
    {
        this->num = num;
    };

    //'clss&' is the refrence to the object of the class because we will use two object reference to compare
    //the func greater is of clss data type

    clss& greater(clss &x)
    {
        if (x.num > num) //x.num is the value of the reference object of func num is the class obj
        {
            return x; //it will return the greater number that is the func obj
        }
        else
        {
            return (*this); //it will return the value at class obj becouse the return type is reference the return value must be value at address
        }
    };
    void display() { cout << num << endl; };
};

int main()
{
    clss obj1(10),obj2(20),obj3;//initializing and declayering objects

    obj3=obj2.greater(obj1);  //obj3 will contain the return value after the comparison 

    obj3.display();//will print that value 

    return 0;
}