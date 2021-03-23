#include<stdio.h>
int main()
{
    int a,b,t,gcd,lcm,a1,b1;

    printf("\nEnter two number: ");
    scanf("%d %d", &a, &b);

    a1 = a;
    b1 = b;

    if(a == 0)
        gcd = a;
    else if(b == 0)
        gcd = b;
    else
    {
        while(b != 0)
        {
            t = b;
            b = a%b;
            a = t;
        }

        gcd = a;
    }

    lcm = (a1*b1)/gcd;

    printf("\nGCD is: %d\n", gcd);
    printf("\nLCM is: %d\n", lcm);

    return 0;
}

