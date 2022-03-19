#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Facl(int x) {
	if (x > 1) {
		return x * Facl(x - 1);
	}
	else {
		return 1;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	Facl(n);
	printf("%d\n", Facl(n));
	return 0;
}
