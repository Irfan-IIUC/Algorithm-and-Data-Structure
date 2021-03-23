#include <stdio.h>
#include<math.h>

int convert(int n)
{
    int dec = 0, i = 0, rem;

    while(n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(8, i);
        ++i;
    }

    return dec;
}

int main()
{
    int n;

    printf("\nEnter a octal number: ");
    scanf("%d", &n);

    printf("\n%d in octal = %d in decimal\n", n, convert(n));

    return 0;
}

