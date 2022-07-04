#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n;i++)
	{
		ret *= i;
	}
	return ret;
}

int Fac2(int n)
{
	if (n<=1)
	{
		return 1;
	}
	else
	{
		return n*Fac2(n - 1);
	}
}

int main()
{
	int n = 0;
	int ret = 0;
	int ret1 = 0;
	printf("input int:\n");
	scanf("%d%d",&ret,&ret1);
	ret = Fac1(ret);
	ret1 = Fac2(ret1);
	printf("%d\n",ret);
	printf("%d\n",ret1);
	return 0;
}