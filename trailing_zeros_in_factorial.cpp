#include<stdio.h>

int findTrailingZeros(int n)
{
	int cnt = 0, i;

	for(i=5; n/i>=1; i*=5)
		cnt += n/i;

	return cnt;
}

int main()
{
	int n;

	printf("\nEnter the number n = ");
	scanf("%d", &n);

	printf("\nTotal number of trailing 0s in %d! is: %d\n", n, findTrailingZeros(n));

	return 0;
}

