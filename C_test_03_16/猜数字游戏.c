//1.电脑生成一个随机数
//2.猜数字
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//菜单函数;
void Menu() {
	printf("***********************************************\n");
	printf("*******      1.play        0.exit      ********\n");
	printf("***********************************************\n");
}
//游戏函数
void Game() {
	int ret = 0;
	int guess = 0;
	int num = 100;
	ret = rand()%100+1;//生成随机数;
	while (1) {
		printf("请猜数字:");
		scanf("%d", &guess);
		if (guess > ret && guess<num) {
			printf("猜大了\n");
		}
		else if (guess < ret) {
			printf("猜小了\n");
		}
		else if (guess > num) {
			printf("数字不能大于100\n");
		}
		else {
			printf("恭喜你，猜对了\n");
			break;
		}
	}

}

int main() {
	int input = 0;
	//拿时间戳来设置随机数的生成起点
    //time_t time(time_t *timer)
	srand((unsigned int)time(NULL));
	do {
		Menu();
		printf("请选择: ");
		scanf("%d", &input);
		switch (input) {
		case 1:
			Game();
			break;
		case 0:
			printf("游戏结束!\n");
			break;
		default :
			printf("选择出错!\n");
			break;
		}
	} while (input);
	return 0;
}