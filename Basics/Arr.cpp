#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define N 1000

int main()
{
    int n,i;
    int a[N];

    cin>>n;

    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    
    for(i=n-1;i>=0;i--)
    {
    cout<<a[i]<<" ";
    }
    
    return 0;
    
}