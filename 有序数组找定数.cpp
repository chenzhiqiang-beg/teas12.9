#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int left = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//数组
//	int right= sizeof(arr) / sizeof(arr[0]) - 1;
//
//	int k = 8;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//			right = mid - 1;
//		else if (arr[mid]>k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("%d\n", arr[mid]);
//			break;
//		}
//	}
//	if (left>right)
//	printf("zhaobudao");
//	return 0;
//}
int main()
{
	int k = 7;
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 12 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid]>k)
		{
			right = mid -1;
		}
		else if (arr[mid]<k)
		{
			left = mid + 1;
		}
		else
		{
			printf("%d\n", arr[mid]);
			break;
		}
	}
	if (left>right)
		printf("找不到\n");
	return 0;
}