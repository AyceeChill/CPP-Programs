#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define N 100000 


int main()
{
    //entering the no. of rows for array and no. of query
    int n,q,s=0,i;

    cin>>n>>q;

    //making an pointer array to gain access to its locations

    int *arr[N];

    int num;

    //loops for number of rows and number of arrays

    while(n--)
    {
        //making new arrays at different locations of pointer array
    
    arr[s]=new int[num];

    cin>>num;

    //a two dimention array for storing different arrays at different locations

    for(i=0;i<num;i++)
    {
        cin>>arr[s][i];
    }
    s++ ;
    }

    //printing locations and elements of the pointer array number of times the query 

    while(q--)
    {
        int a,b;

        cin>>a>>b;

        cout<<arr[a][b]<<endl;

    }

return 0;

}