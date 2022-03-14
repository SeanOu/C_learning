#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, n;
	scanf("%d", &n);
	int ret = 1;
	for (i = 1; i <= n; i++) {
		ret = ret * i;
	}
	printf("%dµÄ½×²ãÎª:%d", n, ret);
	return 0;
}