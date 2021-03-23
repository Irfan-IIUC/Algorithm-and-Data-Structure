#include<stdio.h>

void insertion_sort(int arr[], int n)
{
    int i,j,item;

    for(i=1; i<n; i++)
    {
        item = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>item)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = item;
    }
}

int main()
{
    int arr[]={5,4,3,2,1},i,n=5;

    insertion_sort(arr,n);

    for(i=0; i<5; i++)
        printf("%d\t", arr[i]);

    return 0;
}

