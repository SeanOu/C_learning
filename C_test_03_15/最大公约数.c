#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int m, n;
	printf("������������:");
	scanf("%d%d", &m, &n);
	while (m % n != 0) {
		int r = m % n;
		m = n;
		n = r;
	}
	printf("%d��%d�����Լ��Ϊ:%d", m, n, n);
}