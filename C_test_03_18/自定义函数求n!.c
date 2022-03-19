#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Facl(int x) {
	int i;
	int ret1 = 1;
	for (i = 1; i <= x; i++) {
		ret1 = ret1 * i;
	}
	return ret1;
}

int main() {
	int n;
	int ret = 0;
	scanf("%d", &n);
	ret = Facl(n);
	printf("%d\n", ret);
	return 0;
}