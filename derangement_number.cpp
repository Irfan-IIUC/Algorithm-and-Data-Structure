#include<stdio.h>

int countDer(int n)
{
    if(n == 1) return 0;

    if(n == 2) return 1;

    return (n-1)*(countDer(n-1) + countDer(n-2));
}

int main()
{
    int n;

    printf("\nEnter n = ");
    scanf("%d", &n);

    printf("\nTotal number of derangement is : %d\n", countDer(n));

    return 0;
}
