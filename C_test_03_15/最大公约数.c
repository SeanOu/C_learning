#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int m, n;
	printf("请输入两个数:");
	scanf("%d%d", &m, &n);
	while (m % n != 0) {
		int r = m % n;
		m = n;
		n = r;
	}
	printf("%d和%d的最大公约数为:%d", m, n, n);
}