#include<stdio.h>
#include<string.h>

int hexToDec(char hexVal[])
{
	int len=strlen(hexVal), base=1, dec_val=0, i;

	for(i=len-1; i>=0; i--)
	{
		if (hexVal[i]>='0' && hexVal[i]<='9')
		{
			dec_val += (hexVal[i] - 48)*base;
			base = base * 16;
		}

		else if (hexVal[i]>='A' && hexVal[i]<='F')
		{
			dec_val += (hexVal[i] - 55)*base;
			base = base*16;
		}
	}

	return dec_val;
}

int main()
{
	char hexNum[50];

	printf("\nEnter a hexadecimal number : ");
	gets(hexNum);

	printf("\nThe equivalent decimal number is : %d\n", hexToDec(hexNum));

	return 0;
}

