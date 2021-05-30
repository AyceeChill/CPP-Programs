//this program stores a value in heap memmory check and corrects bad mem allocs if they occur
//heap mem is finite


#include <iostream>
#include <new>
using namespace std;

int main()
{
    int *p;//indipendent pointer

    try//this is going to check for exceptions like a bad mem alloc 
    {
        p=new int; //the adress of the int memory in heap will be given to p 
        //you can initialize the value here as 'p=new int(100)'   
    }
    catch(bad_alloc a)//catching the bad mem alloc like null value which happens when the heap is full
    {
        cout<<"bad mem alloc!"<<endl;
        return 1;//it will return value 1    
    }

    *p=100;//initializing a value to the memory allocated

    cout<<"At address "<<p<<" the value is "<<*p<<endl;//printing assigned mem add and value

    delete p;//this frees the mem by deleting delete only the mem assigned pointers to avoid sys crashes
    
    return 0;
}