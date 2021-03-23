/* Euler's Totient Function => phi(12) = 4 (1,5,7,11) */

#include<stdio.h>

int Phi(int n)
{
    int result = n, i;

    for(i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            while(n%i == 0)
                n/=i;
            result -= result / i;
        }
    }

    if(n>1)
        result -= result / n;

    return result;
}

int main()
{
    int n;

    printf("\nEnter the last term (n) = ");
    scanf("%d", &n);

    printf("\nphi(%d) = %d\n", n, Phi(n));

    return 0;
}

