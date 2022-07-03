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
	ret = rand();//产生随机数
	ret = rand() % 100 + 1;//控制随机数在1~100之间
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((signed int)time(NULL));//为rand产生变量调用时间戳
	do
	{
		mene();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}