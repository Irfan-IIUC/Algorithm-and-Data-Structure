#include<stdio.h>
#include<math.h>

int findDigit(int n)
{
    double digit = 0;

    if(n<0)
        return 0;

    if(n<=1)
        return 1;

    for(int i=2; i<=n; i++)
        digit+=log10(i);

    return floor(digit)+1;
}

int main()
{
    int n;

    printf("\nEnter the number n = ");
    scanf("%d", &n);

    printf("\nTotal digit in %d! is : %d\n", n, findDigit(n));

    return 0;
}
