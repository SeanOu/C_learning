#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 1;
	while (a <= 100) {
		if (a % 2 != 0) {
			printf("%d ", a);
		}
		a++;
	}
	return 0;
}