#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)//优化减少变量的使用节约空间
{
	char zimu;
	int i, j;
	char a;
	printf("请输入一个字母A.....Z;");
	scanf("%c", &zimu);
	int num = zimu - 'A' + 1;
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num - i; j++)
			printf(" ");
		for (j = 0, a = 'A'; j <= i; j++, a++)
			printf("%c", a);
		for (j = 0, a= a - 2; j < i; j++, a--)
			printf("%c", a);
		printf("\n");
	}
	return 0;
}

//int main(void)//自己写的原代码（标准答案见下）
//{
//	char zimu;
//	int i, j, z, c;
//	char a, b; 
//	printf("请输入一个字母A.....Z;");
//	scanf("%c", &zimu);
//		int num = zimu - 'A' + 1;
//	for (i = 0; i < num; i++)
//	{
//		for (j = 0; j < num-i; j++)
//			printf(" ");
//		for (z = 0, a = 'A'; z <= i; z++,a++)
//			printf("%c", a);
//		for (c = 0, b = a-2; c < i; c++, b--)
//			printf("%c", b);
//		printf("\n");
//	}  
//	return 0;
//}
//int main(void){//标准答案
//	int i, j, num;
//	char c;
//	printf("Enter the core char you want to print(A...Z):");
//	scanf("%c", &c);
//	char ch = 'A';
//	num = c - 'A' + 1;
//	/* 输入字符的ASCII码减去 'A' 加 1的到十进制结果 num
//	* num即是需要打印的从 A 开始的字符数，也是打印的总行数 */
//	for (i = 1; i <= num; i++){
//		/* 外部循环控制打印行数， num 为输入字符和 A 的差加 1* */
//		for (j = 0; j < num - i; j++)
//			printf(" ");
//		/* 打印空格，空格数为总字符数减去当前行应打印的字符数。
//		* 即，本行应打印空格数 + 应打印字符数 = 总字符数（总行数）*/
//		for (ch = 'A'; j < num; j++)
//			printf("%c", ch++);
//		/* 打印正序字符数，需要ch做递增操作，起始值 j 在空格处已经通过循环
//		* 做了初始化，因此，只打印剩余字符数。 */
//		for (j = 1, ch -= 2; j < i; j++, ch--)
//			printf("%c", ch);
//		/* 打印逆序字符，字符做递减操作。*/
//		printf("\n");
//	}
//	return 0;
//}
