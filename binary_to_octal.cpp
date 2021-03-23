#include <stdio.h>
#include<math.h>

//binary to decimal convertion
int convert1(int n)
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
    int n,dec_num, oct=0, i=1, j;

    printf("\nEnter a binary number: ");
    scanf("%d", &n);

    dec_num = convert1(n);

    //decimal to octal conversion
    for(j=dec_num; j>0; j=j/8)
    {
        oct = oct + (dec_num%8)*i;
        i = i*10;
        dec_num = dec_num/8;
    }

    printf("\nThe equivalent octal number is : %d\n", oct);

    return 0;
}
