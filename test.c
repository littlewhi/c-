#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//void restart(int arr[10],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reserve(int arr[10],int sz)
//{
//		int L = 0;
//		int R = sz - 1;
//	while (L < R)
//	{
//		int temp = arr[L];
//		arr[L] = arr[R];
//		arr[R] = temp;
//		L++;
//		R--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//restart(arr,sz);
//	print(arr,sz);
//	reserve(arr,sz);
//	print(arr, sz);
//	return 0;
//}
//void exchange(int arr1[],int arr2[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int mid = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = mid;
//	}
//}
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	int arr2[] = { 4,5,6 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	print(arr1, sz);
//	print(arr2, sz);
//	exchange(arr1, arr2,sz);
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}
//int reb(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}
//int reb(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n /= 2;
//	}
//	return count;
//}
//int reb(int n)
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}7  111
//6   110
//&   110
//5   101
//&   100
//int reb(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//			count++;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = reb(n);
//	printf("%d\n", i);
//	return 0;
//}
//int differ(int n, int m)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) ^ (m >> i)) == 0)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n,&m);
//	int i = differ(n, m);
//	printf("%d", i);
//	return 0;
//}
//void NUM(int arr[],int sz)
//{
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j;
//		int flas = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int mid = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = mid;
//				flas = 0;
//			}
//		}
//		if (1 == flas)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	NUM(arr,sz);
//	print(arr, sz);
//	return 0;
//}
int main()
{
	int m[] = { 1,2,3,4 ,6};
	int* pm = m;
	printf("%d", sizeof(pm));
}