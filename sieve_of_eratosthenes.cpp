#include<stdio.h>
#include<math.h>

int main()
{
    int num[50],i,j,k,step,n,limit;

    printf("\nEnter the range n = ");
    scanf("%d", &n);

    limit = sqrt(n+1);

    for(i=0; i<=n; i++)
        num[i] = i+1;

    num[0] = 0; // 1 is not a prime number

    for(i=1; i<=limit; i++)
    {
        if(num[i] != 0)
        {
            k = (num[i]*2)-1;
            step = num[i];

            for(j=k; j<=n; j=j+step)
                num[j] = 0;
        }
    }

    printf("\nPrime numbers from 1 to %d are: ", n);

    for(i=0; i<n; i++)
    {
        if(num[i] != 0)
            printf("%d ", num[i]);
    }

    printf("\n");

    return 0;
}
