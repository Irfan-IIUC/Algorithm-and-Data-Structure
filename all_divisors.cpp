#include<stdio.h>
#include<math.h>

int main()
{
    int arr[50],i,j,k=0,n,cnt=0,sum=0,temp;

    printf("\nEnter the number n = ");
    scanf("%d", &n);

    printf("\n");

    for(i=1; i<=sqrt(n)+1; i++)
    {
        if(n%i == 0)
        {
            arr[k++] = i;
            arr[k++] = n/i;
            cnt+=2;
            sum = sum + i + (n/i);
        }
    }

    //sorting the array
    for(i=0; i<k; i++)
    {
        for(j=i+1; j<k; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nAll divisors of %d is : ", n);
    for(i=0; i<k; i++)
        printf("\t%d", arr[i]);

    printf("\n\nTotal number of divisors is : %d\n", cnt);
    printf("\nSum of all divisors is : %d\n", sum);

    return 0;
}

