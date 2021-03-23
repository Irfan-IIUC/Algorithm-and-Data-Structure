#include<stdio.h>
int main()
{
    int arr[50],i,j,k,item,n;

    printf("\nHow many Elements : ");
    scanf("%d", &n);

    printf("\nEnter %d Elements : ", n);
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    j=n-1;

    printf("\nWhich position you want to Enter : ");
    scanf("%d", &k);
    printf("\nEnter the Element : ");
    scanf("%d", &item);

    while(j>=k)
    {
        arr[j+1] = arr[j];
        j--;
    }

    arr[k] = item;

    printf("\nNow the Elements are : ");
    for(i=0; i<n+1; i++)
        printf("%d ", arr[i]);

    printf("\n");

    return 0;
}
