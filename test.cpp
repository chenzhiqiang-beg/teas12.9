#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i = 0;
	int j = 0;
	int ch = 1;
	int num = 0;
	for (i = 1; i <= n; i++)
	{
		ch = 1;
		for (j = 1; j <= i; j++)
		{
			ch = ch*j;

		}
		num = num + ch;
	}
	printf("%d\n", num);
	
	return 0;
}




