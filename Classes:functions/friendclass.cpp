#include <iostream>
using namespace std;

class num
{
private:
    int a, b;

public:
    friend class friendc;//adding friend class
    num(void);//const made
    num(int x, int y);
};

class friendc
{
public:
    int sum(num x);//func to use the data type of another class 
};
int friendc::sum(num x)
{
    return (x.a + x.b);//func to add the two private data of diff class
};
num::num(void)//initializing const
{
    a = 0;
    b = 0;
};
num::num(int x, int y)//const to get two data
{
    a = x;
    b = y;
};
int main()
{
    num s(3, 4);//initializing the private data value
    friendc r;

    cout<<r.sum(s)<<endl;//gfriend class's func to print first class's data

    return 0;
}
