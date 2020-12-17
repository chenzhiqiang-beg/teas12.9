#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{

	int m= 56;
	int n = 104;
	int i = 0;
	int z = 0;
	for (i = 0;m%n!=0; i++)
	{
		if (m %n != 0)
		{
			z = n;
			n = m % n;
			m = z;
		}
		}
	printf("%d", n);
	return 0;
}
//{
//	int m, n, team;
//	scanf("%d %d", &m, &n);
//	if (m <= 0 || n <= 0)return -1;
//	while (n != 0){
//		team = m%n;
//		m = n;
//		n = team;
//	}
//	printf("%d\n", m);
//	return 0;
//}
