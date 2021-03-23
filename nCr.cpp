#include<stdio.h>

int nCr(int n, int r)
{
    int res = 1, i;

    if(r>n-r)
        r = n-r;

    for(i=0; i<r; i++)
    {
        res = res*(n-i);
        res = res/(i+1);
    }

    return res;

}

int main()
{
    int n,r;

    printf("\nEnter n and r for nCr calculation : ");
    scanf("%d %d", &n, &r);

    printf("\nResult of %dC%d is = %d\n", n, r, nCr(n,r));

    return 0;
}
