//while using nothrow form of new we can return the null value instead of throwing it

#include <iostream>
#include <new>
#include <cstring>
using namespace std;

int main()
{
    int *p;//indipendent pointer declayered

    p=new(nothrow) int[5];//a dynamic array address is provided to p via nothrow method 
    if(!p)//if the value is null due to lack of space in heap
    {
        cout<<"bad mem alloc!"<<endl;
        return 1;
    }

    for (int i = 0; i < 5; i++)//adding data to array
    {
        p[i]=i;
    }

    for (int i = 0; i < 5; i++)//printing the array
    {
        cout<<p[i]<<endl;
    }
    
    delete p;//freeing mem
    

    return 0;
}