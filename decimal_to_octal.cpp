#include <stdio.h>

int  main()
{
    int n,i,oct=0,dn;

    printf("\nEnter a number to convert : ");
    scanf("%d",&n);

    dn = n;
    i = 1;

    while(n!=0)
    {
        oct = oct + (n%8)*i;
        i = i*10;
        n = n/8;
    }

    printf("\nThe Octal of %d is %d.\n", dn, oct);
}


