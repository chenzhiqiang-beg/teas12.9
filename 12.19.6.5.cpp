#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)//�Ż����ٱ�����ʹ�ý�Լ�ռ�
{
	char zimu;
	int i, j;
	char a;
	printf("������һ����ĸA.....Z;");
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

//int main(void)//�Լ�д��ԭ���루��׼�𰸼��£�
//{
//	char zimu;
//	int i, j, z, c;
//	char a, b; 
//	printf("������һ����ĸA.....Z;");
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
//int main(void){//��׼��
//	int i, j, num;
//	char c;
//	printf("Enter the core char you want to print(A...Z):");
//	scanf("%c", &c);
//	char ch = 'A';
//	num = c - 'A' + 1;
//	/* �����ַ���ASCII���ȥ 'A' �� 1�ĵ�ʮ���ƽ�� num
//	* num������Ҫ��ӡ�Ĵ� A ��ʼ���ַ�����Ҳ�Ǵ�ӡ�������� */
//	for (i = 1; i <= num; i++){
//		/* �ⲿѭ�����ƴ�ӡ������ num Ϊ�����ַ��� A �Ĳ�� 1* */
//		for (j = 0; j < num - i; j++)
//			printf(" ");
//		/* ��ӡ�ո񣬿ո���Ϊ���ַ�����ȥ��ǰ��Ӧ��ӡ���ַ�����
//		* ��������Ӧ��ӡ�ո��� + Ӧ��ӡ�ַ��� = ���ַ�������������*/
//		for (ch = 'A'; j < num; j++)
//			printf("%c", ch++);
//		/* ��ӡ�����ַ�������Ҫch��������������ʼֵ j �ڿո��Ѿ�ͨ��ѭ��
//		* ���˳�ʼ������ˣ�ֻ��ӡʣ���ַ����� */
//		for (j = 1, ch -= 2; j < i; j++, ch--)
//			printf("%c", ch);
//		/* ��ӡ�����ַ����ַ����ݼ�������*/
//		printf("\n");
//	}
//	return 0;
//}
