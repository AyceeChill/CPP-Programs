#include<iostream>
using namespace std;

void ref(int &x,int &y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a,b ;
    cout<<"enter numbers"<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<"-"<<b<<endl;

return 0;
}