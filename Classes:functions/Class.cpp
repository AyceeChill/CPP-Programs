#include<iostream>
#include<string>
using namespace std;

class student
{
    //access modifier
    private:

    int accno,id,pass;


    public:

    char name;
    int rollno;
 
    //data functions to access class
    void setdata();
    void getdata();
    

};

//defining functions
//setting data/initialization
void student :: setdata()
{
   accno=1234;
   id=3457;
   pass=7564;
}

//func to get data
void student :: getdata()
{
    cout<<name<<endl<<rollno<<endl<<accno<<endl<<id<<endl<<pass<<endl;
}

int main()
{
    student a;

    a.name='A';
    a.rollno=123;

    a.setdata();

    a.getdata();
    

return 0;

}