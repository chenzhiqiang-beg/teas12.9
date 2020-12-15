#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void dad(int n)
{
	int c = 0;
	if (n / 10 > 0)
		dad(n/10);
        c= n % 10;
		printf("%d ", c);
	
}
int main()
{
	int n = 987546123;
	 dad(n);
	return 0;
}
