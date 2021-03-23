#include<stdio.h>
int main()
{
    int first=0, second=1, fibo, i, n;

    printf("\nEnter the last term: ");
    scanf("%d", &n);

    if(n<=0)
        printf("\nInvalid\n");
    else if(n == 1)
        printf("\nFibonacci series from 1 to 1 are: 0\n");
    else if(n == 2)
        printf("\nFibonacci series from 1 to 2 are: 0 1\n");
    else
    {
        printf("\nFibonacci series from 1 to %d are: 0 1 ", n);

        for(i=3; i<=n; i++)
        {
            fibo = first+second;
            printf("%d ", fibo);
            first = second;
            second = fibo;
        }

        printf("\n");
    }

    return 0;
}
