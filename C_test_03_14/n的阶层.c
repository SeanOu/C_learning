#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i, n;
	scanf("%d", &n);
	int ret = 1;
	for (i = 1; i <= n; i++) {
		ret = ret * i;
	}
	printf("%d�Ľײ�Ϊ:%d", n, ret);
	return 0;
}