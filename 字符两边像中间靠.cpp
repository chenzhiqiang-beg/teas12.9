#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{  
	char arr1[] = " jiayou dagongren!";
	char arr2[] = "******************";//ÓÃarr1Ìæ»»arr2
	int  left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0])-1;
	while (left <= right)
	{
		if (left <= right)
		{
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", arr2);
			left++;
			right--;
		}
	}
	return 0;
}