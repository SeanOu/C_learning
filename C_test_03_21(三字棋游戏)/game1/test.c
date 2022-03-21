//测试三字棋游戏
#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu() {
	printf("*****************************************************\n");
	printf("************   1.play         0.exit   **************\n");
	printf("*****************************************************\n");
}

//游戏的整个实现
void game() {
	char ret = 0;
	char board[ROW][COL] = { 0 };//全部都是空格
	//初始化数组棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1) {
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '*') {
		printf("玩家赢\n");
	}
	else if (ret == '#') {
		printf("电脑赢\n");
	}
	else {
		printf("平局\n");
	}

}


void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出");
			break;
		default:
			printf("选择有误");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}