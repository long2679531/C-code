#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void bubble(int arr[], int sz)
{
	//ȷ�����������
	int i = 0;
	for (i = 0; i < sz - 1;i++)
	{
		int flag = 1;//�����Ѿ�����
		//ÿһ��������
		int j = 0;
		for (j = 0; j < sz - 1 - i;j++)
		{
			if (arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//����������ȫ����
			}
		}
		if (flag==1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,9,8};
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, sz);
	for (i = 0; i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}