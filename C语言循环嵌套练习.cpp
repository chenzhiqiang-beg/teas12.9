#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()//优化
{
	int i = 0;
	int j = 0;
	char c ;
	for (j = 0; j < 6; j++)
	{
			for (i = 0,c='F'; i <=j; i++,c--)
			printf("%c", c);
		printf("\n");
	}
	return 0;
}//int main()源代码
//{
//	int i = 0;
//	int j = 0;
//	for (j = 46; j > 40; j--)
//	{
//		char c = 'F';
//		for (i = 46; i >= j; i--)
//			printf("%c", c--);
//		printf("\n");
//	}
//	return 0;
//}