#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int qingwa(int n)
{
	if (n == 0)
		return 0;
	 if (n == 1)
		return 1;
	 if (n == 2)
		return 2;
	else 
		return qingwa(n - 1) + qingwa(n - 2);
}
int main()
{
	int n=0;
	scanf("%d",&n);
	int math=0;
	math=qingwa(n);
	printf("%d\n", math);
	return 0;
}