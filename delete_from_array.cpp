#include<stdio.h>
int main()
{
    int arr[50],i,j,k,item,n;

    printf("\nHow many Elements : ");
    scanf("%d", &n);

    printf("\nEnter %d Elements : ", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("\nWhich position you want to delete : ");
    scanf("%d", &k);

    j = k;

    while(j<n-1)
    {
        arr[j] = arr[j+1];
        j++;
    }

    printf("\nNow the Elements are : ");
    for(i=0; i<n-1; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}

