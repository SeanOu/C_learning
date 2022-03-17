#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Jud(int x) {
	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int year;
	printf("请输入年份:");
	scanf("%d", &year);
	if (Jud(year) == 1) {
		printf("%d是闰年", year);
	}
	else {
		printf("%d不是闰年", year);
	}
	return 0;
}