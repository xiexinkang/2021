#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int line = 0;
	scanf("%d", &line);
	//��ӡ�ϰ벿��
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j <2*i+1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j <2*(line-1-i)-1 ; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}