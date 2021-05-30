//A program to printing int array via pointer while catching the bad mem alloc error
//the pointer takes an address from the heap memory 

#include <iostream>
#include <new>
using namespace std;

int main()
{
    int *p;//indipendent pointer 

    try
    {
        p = new int[10];//array size initialized
    }
    catch (bad_alloc a)//catching bad mem alloc
    {
        cout << "bad mem alloc!" << endl;
        return 1;
    }

    for (int i = 0; i < 10; i++)//adding data to the array
    {
        p[i] = i;
    }

    cout<<"the array at address "<<p<<" is."<<endl;

    for (int i = 0; i < 10; i++)//printing data
    {
        cout << p[i];
    }
    cout<<endl;

    delete[] p;//freeing memory

    return 0;
}