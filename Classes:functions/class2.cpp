#include <iostream>
#include <string>
using namespace std;
#define N 10000

class Student
{
    private:
    
    int age;
    int stand;
    
    public:
    //public data to access directly
    char fname[N];
    char lname[N];
    
    void setdata(int age1,int stand1);
    void getdata();   
};

void Student :: setdata(int age1,int stand1)
{
    age=age1;
    stand=stand1;     
};

void Student :: getdata()
{
    cout << age << "\n";
    cout << lname << ", " << fname << "\n";
    cout << stand << "\n";
    cout << "\n";
    cout << age <<","<<fname<<","<<lname<<","<<stand;     
};

int main() {
    int age, stand;
    char fname[N], lname[N];
    Student st; 
    
    cin >> age >> st.fname >> st.lname >> stand;
    
    st.setdata(age,stand);
    
    st.getdata();
    
    
    
    return 0;
}