#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdlib.h>
#include <stdio.h>


void mene()
{
	printf("####################################\n");
	printf("######    1.play    0.exit    ######\n");
	printf("####################################\n");
}
void game()
{
	int ret = 0;
	int guess = 0;
	ret = rand();//���������
	ret = rand() % 100 + 1;//�����������1~100֮��
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((signed int)time(NULL));//Ϊrand������������ʱ���
	do
	{
		mene();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}