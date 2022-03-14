#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n, i;
	int sum = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		ret = ret * i;
		sum = sum + ret;
	}
	printf("%dµÄ½×²ãºÍÎª:%d", n, sum);
	return 0;
}