#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 0;
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("%d为偶数\n", a);
	}
	else
		printf("%d为奇数\n", a);
	return 0;
}