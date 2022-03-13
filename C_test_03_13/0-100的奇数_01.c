#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 0;
	for (a = 0; a < 100; a++) {
		if (a % 2 != 0)
			printf("%d ", a);
	}
	return 0;
}