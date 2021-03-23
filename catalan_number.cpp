#include<stdio.h>

unsigned long int catalan(unsigned int n)
{
    unsigned long int res = 0;
    int i;

    if(n<=1) return 1;

    for(i=0; i<n; i++)
        res = res + (catalan(i)*catalan(n-i-1));

    return res;
}

int main()
{
    int i;

    printf("\nCatalan Number =>\n");

    for(i=0; i<10; i++)
        printf("Catalan(%d) = %d\n", i, catalan(i));

    return 0;
}
