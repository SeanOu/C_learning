//һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨���ܹ��ж�����������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Way(int x) {
	int a = 1;
	int b = 2;
	int c = a;
	while (x > 2) {
		c = a + b;
		a = b;
		b = c;
		x--;
	}
	return c;
}

int main() {
	int n;
	scanf("%d", &n);
	Way(n);
	printf("%d\n", Way(n));
	return 0;
}