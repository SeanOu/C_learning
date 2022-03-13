#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int day = 0;
	scanf("%d", &day);
	switch (day) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		//当case里的语句相同时，可以省略只写一个;
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误!");
	}
	return 0;
}