#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 0;
	scanf("%d", &a);
	if (a % 2 == 0) {
		printf("%dΪż��\n", a);
	}
	else
		printf("%dΪ����\n", a);
	return 0;
}