#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//������n��쳲�������
int count = 0;
int Fib(int x) {
	if (x == 3) {
		count++;//���ڲ��Ե�3��쳲��������������˶��ٴ�
	}
	if (x <= 2) {
		return 1;
	}
	else {
		return (Fib(x - 1) + Fib(x - 2));
	}
}

int main() {
	int n;
	scanf("%d", &n);
	Fib(n);
	printf("%d\n", Fib(n));
	printf("count = %d\n", count);
	return 0;
}
//�ݹ������⣬��n��ֵ�ϴ�ʱ��쳲��������ᱻ�ظ�����ܶ�Σ��ᵼ�¼���������ʱ�����������ѭ������ǽ��Ž�