#include <stdio.h>
#include<string.h>
#include<math.h>

int convert(int n)
{
    int dec = 0, i = 0, rem;

    while(n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}

int main()
{
    int dec,n,dn=0,j,s,a,k=0;
    char temp,arr[50];

    printf("\nEnter a binary number: ");
    scanf("%d", &n);

    dec = convert(n);

    for(j=dec; j>0; j/=16)
    {
        a = j%16;

        if(a < 10)
            temp = a+48;
        else
            temp = a+55;

        arr[k++] = temp;
    }

    arr[k] = '\n';

    strrev(arr);
    puts(arr);

    printf("\n");

    return 0;
}

