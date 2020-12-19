#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	char c='A';
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j <= i; j++,c++)
			printf("%c", c);
		printf("\n");
	}
	return 0;
}