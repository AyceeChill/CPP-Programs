//program for copy const 
//if you do not initialize a copy const the compiler will provide one automatically

#include <iostream>
using namespace std;

class data
{
private:
    int x;
    int y;

public:
    data()//default const
    {
        x = 0;
        y = 0;
    };
    data(int p)//const 1
    {
        x = p;
        y = 0;
    };
    data(int p, int q)//const 2
    {
        x = p;
        y = q;
    };
    data(data &obj)//manual copy const made to take reference object of same type
    {
        cout<<"manual CC"<<endl;
        x=obj.x;
        y=obj.y; //the private variable value will become the reference objrect's value 
    };

    void display() { cout << x << " " << y << endl; };//to display the value
};

int main()
{
    //this will copy and make a default copy const 

    //data a1(1),a2(1,2),a3(a1);
    //a1.display();
    //a2.display();
    //a3.display();
   
    //this will copy and make a default copy const 

    //data a1(1),a2(1, 2),a3(a1),a4(a2);
    //a1.display();
    //a2.display();
    //a3.display();
    //a4.display();

    data a1(1),a2(1, 2),a4;
    a1.display();
    a2.display();
    
    data a3(a1);//copy const will be called whenever you make a object
    a3.display();

    a4=a1;//copy const wont be called
    a4.display();//will print the value 1 0


   

    return 0;
}
