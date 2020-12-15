#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n=0;
	int c = 0;//n个的跳法个数
	int i = 0;
	scanf("%d", &n);
	if (n == 0);
	c = 0;
	if (n == 1)
		c = 1;
	if (n == 2)
		c = 2;
	else
	{
		int a = 1;
		int b = 2;
		for (i = 3; i <= n; i++)
		{
			c = a + b;
			a = b;
			b = c;
		}
	}
	printf("%d", c);
	return 0;
}