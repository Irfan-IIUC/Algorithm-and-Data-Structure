/* 10(x) + 6(y) = 2 => x=2, y=-1 */

#include<stdio.h>

int egcd(int a, int b, int &x, int &y)
{
    int d, x1, y1;

    if(a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }

    d = egcd(b%a, a, x1, y1);

    x = y1 - ((b/a)*x1);
    y = x1;

    return d;

}

int main()
{
    int a,b,x,y;

    printf("\nEnter 2 numbers to calculate EGCD : ");
    scanf("%d %d", &a, &b);

    egcd(a, b, x, y);

    printf("\nThe value of x and y is: %d %d\n", x, y);

    return 0;
}
