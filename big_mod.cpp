/* 2^10 mod 10 = ? */

#include<stdio.h>

int bigmod(int x,int n,int m)
{
    int y;

    if(n==0)
        return 1;

    else if(n%2==0)
    {
        y=bigmod(x,n/2,m);
        return ((y*y)%m);
    }
    else
        return (((x%m)*bigmod(x,n-1,m))%m);
}

int main()
{
    int i,x,n,y,a;

    printf("\nEnter base, power and mod : ");
    scanf("%d %d %d", &x, &n, &y);

    a = bigmod(x,n,y);

    printf("\n\n%d^%d mod %d is = %d", x, n, y, a);
    return 0;
}

