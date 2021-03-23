#include<stdio.h>

int linear_search(int arr[], int n, int x)
{
    int i;

    for(i=0; i<n; i++)
    {
        if(arr[i]==x)
            return i;
    }

    i=-1;
    return i;
}

int main()
{
    int arr[]={6,4,3,8,1,7,2,5},n=8,x=0,z;

    z = linear_search(arr, n, x);

    if(z==-1)
        printf("Element not found in array\n");
    else
        printf("Element found in %d position in the array\n", z);

    return 0;
}
