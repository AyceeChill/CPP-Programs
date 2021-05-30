#include <stdio.h>

struct pair 
{
    long long int min;
    long long int max;
};

struct pair getMinMax(long long int arr[], long long int n);

int main()
{
    long long int t,n,a[100002],i;
    struct pair minmax;

    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);

        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        minmax=getMinMax(a,n);
        printf("%lld %lld\n",minmax.min,minmax.max);
    }
    return 0;
}
    
struct pair getMinMax(long long int arr[], long long int n) 
{
    struct pair minmax;//creating a temp struct pair with object minmax
    int i;
    if(n==1)//if array have only one element
    {
    minmax.min=arr[0];
    minmax.max=arr[0];
    return minmax;
    }
    
    if(arr[0]>arr[1])//if array have multiple elements we initializes the value to compare
    {
    minmax.min=arr[0];
    minmax.max=arr[1];
    }
    else
    {
    minmax.min=arr[1];
    minmax.max=arr[0];
    }
    
    
    for(i=0;i<n;i++)
    {
        if(minmax.min>arr[i])
        {
            minmax.min=arr[i];
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(minmax.max<arr[i])
        {
            minmax.max=arr[i];
        }
    }
    return minmax;
    

}