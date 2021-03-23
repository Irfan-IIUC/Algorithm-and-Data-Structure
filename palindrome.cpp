#include <stdio.h>
int main()
{
    int n, rev_num = 0, rem, org_num;

    printf("\nEnter an integer: ");
    scanf("%d", &n);

    org_num = n;

    // reversed integer is stored in reversedN
    while(n != 0)
    {
        rem = n%10;
        rev_num = rev_num*10 + rem;
        n /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (org_num == rev_num)
        printf("\n%d is a palindrome.\n", org_num);
    else
        printf("\n%d is not a palindrome.\n", org_num);

    return 0;
}
