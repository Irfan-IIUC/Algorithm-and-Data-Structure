#include<stdio.h>

void selection_sort(int arr[], int n)
{
    int i,j,temp,index_min;

    for(i=0; i<n; i++)
    {
        index_min=i;

        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
                index_min = j;
        }

        if(index_min != i)
        {
            temp = arr[i];
            arr[i] = arr[index_min];
            arr[index_min] = temp;
        }
    }
}

int main()
{
    int arr[]={5,4,3,2,1},i,n=5;

    selection_sort(arr,n);

    for(i=0; i<5; i++)
        printf("%d\t", arr[i]);

    return 0;
}
