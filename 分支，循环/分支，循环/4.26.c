#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//��ӡ����
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i % 2 == 1)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//    while(i<=100)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//			
//		}
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0
//	scanf("%d", &i);
//	switch(i)
//	{
//	case 1:
//
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", arr);
//	printf("��ȷ�ϣ�Y/N��");
//	i = getchar();
//
//	return 0;
//} 

//�׳�
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;	
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//1-10�׳��ܺ�
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//�����������
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 7;
	int left = 0;
	int right = 9;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ����±���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���");
	}
	return 0;

//}
// 
// 
// �����ƶ������м���
//#include<windows.h>
//int main()
//{
//	char arr1[] = "11111111111";
//	char arr2[] = "###########";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//		//printf("%s\n", arr2);
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//������������
//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	char input = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", arr);
//		if (strcmp(arr, "123456") == 0)
//		{
//			printf("����������ȷ\n");
//			break;
//		}
//		else
//		{
//			printf("�����������\n");
//		}
//	}
//	if(i==3)
//	printf("��������������˳�����");
//	return 0;
//}