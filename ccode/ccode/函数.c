#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "add.h"
//����ָ������ͽ����ò�������������ֵ��
//void Swap1(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	//char arr[] = "hello world";
//	////memset(arr, '#', 5);
//	//char arr1[] = "#################";
//	//strcpy(arr1,arr);
//	//printf("%s\n", arr1);
//	//int a = 10;
//	//int* pa = &a;  //pa��ָ�����
//	//*pa = 30;    //�����ò�����*pa����a�����ݡ�
//	//printf("%d\n", a);
//	int a  = 10;
//	int b = 20;
//	printf("a = %d, b = %d\n", a,b);
//	Swap1(&a,&b);
//	printf("a = %d, b = %d\n", a,b);
//	return 0;
//}

//��������
//int is_prime(int n)
//{	
//	int j = 0;
//	for(j=2;j<=n-1;j++)
//	{
//		if(n%j == 0) //�ܱ�j����˵������һ��1�����������������������
//			return 0;
//		else
//			return 1;
//	}
//
//}
//
//int main()
//{
//	int i = 0;
//	for(i=100;i<=200;i++)
//	{
//		if(is_prime(i) == 1)
//			printf("%d ��������\n", i);
//		else
//			printf("%d ����������\n",i);
//	}
//	return 0;
//}

//����ֲ���
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	//int sz = sizeof(arr)/sizeof(arr[0]);
//	int right = sz-1;
//	while(left<=right)
//	{
//	int mid = (right+left)/2;
//	if(arr[mid]<k)
//	{
//		left=mid+1;
//	}
//	else if(arr[mid]>k)
//	{
//		right=mid-1;
//	}
//	else
//	{
//		return mid;
//	}
//	}
//	return -1;
//
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
//	int k=19;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);
//	if(ret == -1)
//	{
//		printf("Not found\n");
//	}
//	else
//	{
//		printf("%d�±���:%d\n", k,ret);
//	}
//	return 0;
//}

//û����һ�κ�����numֵ��һ
//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}

//������Ƕ�׵���
//void new_line()
//{
//	printf("aaaaaaaaa\n");
//}
//
//void three_line()
//{
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		new_line();
//	}
//}
//
//int main()
//{
//	three_line();
//	return 0;
//}

//��������ʽ����
//int main()
//{
//printf("%d", printf("%d",printf("%d","%d",printf("%d",printf("%d",89)))));
//return 0;
//}


int main()
{
	int a = 10;
	int b =	20;
	int sum = 0;
	sum  = add(4,5);
	printf("%d\n", sum);
	return 0;
}