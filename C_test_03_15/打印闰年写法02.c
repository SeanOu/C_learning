#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i;
	int j = 0;
	for (i = 1000; i <= 2022; i++) {
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) {
			j++;
			printf("%d ", i);
		}
	}
	printf("\n闰年一共有:%d个\n", j);
	return 0;
}