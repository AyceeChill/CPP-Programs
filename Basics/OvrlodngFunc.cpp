#include<iostream>
using namespace std;

int calc(int x,int y)
{
    return x+y ;
}
int calc(int x,int y,int z)
{
    return x+y+z ;
}
int main()
{
    int a,b,c;

    cout<<"enter three numbers"<<endl;

    cin>>a>>b>>c;

    cout<<"Add of first two."<<endl<<calc(a,b)<<endl;
    cout<<"Add of three."<<endl<<calc(a,b,c)<<endl;

return 0;
}