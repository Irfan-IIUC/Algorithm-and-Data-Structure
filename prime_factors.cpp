#include <stdio.h>
#include<math.h>

void primeFactors(int n)
{
    int i,limit;

    limit = sqrt(n);

    printf("\nAll prime factors of %d are : ", n);

    // Print the number of 2s that divide n
    while(n%2 == 0)
    {
        printf("2 ");
        n = n/2;
    }

    // n must be odd at this point. So we can skip one element
    for(i=3; i<=limit; i+=2)
    {
        while(n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n is a prime number greater than 2
    if(n>2)
        printf("%d", n);
}

int main()
{
    int n;

    printf("\nEnter the number n = ");
    scanf("%d", &n);

    primeFactors(n);

    printf("\n");

    return 0;
}
