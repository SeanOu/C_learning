//һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨���ܹ��ж�����������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Way(int x) {
	if (0 < x && x <= 2) {
		return x;
	}
	else if (x <= 0) {
		return 0;
	}
	else {
		return Way(x - 1) + Way(x - 2);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	Way(n);
	printf("%d\n", Way(n));
	return 0;
}