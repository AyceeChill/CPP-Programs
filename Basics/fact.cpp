#include<iostream>
using namespace std;

int fact(int x)
{
    if(x==0)
    return 1;
    
    if(x==1)
    {
        return 1;
    }
    else
    {
        return(x*fact(x-1));
    }
}

int main()
{
    int n,f ;

    cout<<"Enter the number.\n" ;
    cin>>n;
  
    f=fact(n) ;

    cout<<"The factorial is.\n";

    cout<<f<<"\n";
    
    return 0;

}
