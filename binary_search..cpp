#include<stdio.h>

int Binary_search(int arr[], int n, int x)
{
    int left=0,right=n-1,mid;

    while(left<=right)
    {
        mid = (left+right)/2;

        if(arr[mid] == x)
            return mid;

        if(arr[mid] < x)
            left = mid+1;
        else
            right = mid-1;
    }

    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9},n=9,x=0,z;

    z = Binary_search(arr, n, x);

    if(z==-1)
        printf("Element not found in array\n");
    else
        printf("Element found in %d position in the array\n", z);

    return 0;
}
