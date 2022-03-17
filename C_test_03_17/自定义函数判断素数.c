#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Jud(int x) {
	int j = 0;
	for (j = 2; j < x; j++) {
		if (x % j == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int i = 0;
	printf("请输入一个数:");
	scanf("%d", &i);
	if (i == 1) {
		printf("%d不是素数", i);
	}
	else if (Jud(i) == 1) {
		printf("%d是素数", i);
	}
	else {
		printf("%d不是素数", i);
	}
	return 0;
}