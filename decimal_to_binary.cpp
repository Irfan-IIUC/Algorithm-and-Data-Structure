#include <stdio.h>

int main()
{
    int n,i,binno=0,dn;

    printf("\nEnter a decimal number to convert into binary : ");
    scanf("%d",&n);

    dn=n;
    i=1;

    while(n!=0)
    {
        binno=binno+(n%2)*i;
        i=i*10;
        n=n/2;
    }

    printf("\nThe Binary of %d is %d.\n",dn,binno);

    return 0;
}

