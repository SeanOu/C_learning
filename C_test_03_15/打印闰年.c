#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i;
	int j = 0;
	for (i = 1000; i <= 2022; i++) {
		if (i % 4 == 0 && i % 100 != 0) {
			j++;
			printf("%d ", i);
		}
		else if (i % 400 == 0) {
			j++;
			printf("%d ", i);
		}
	}
	printf("\n����һ����:%d��\n", j);
	return 0;
}