#include<stdio.h>

void bubble_sort(int arr[], int n)
{
    int i,j,temp;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

    int main()
    {
        int arr[]= {5,4,3,2,1},i,n=5;

        bubble_sort(arr,n);

        for(i=0; i<5; i++)
            printf("%d\t", arr[i]);

        return 0;
    }

