#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main() {
	int a = 0;
	int b = 0;
	printf("请输入两个数:\n");
	printf("a=");
	scanf("%d", &a);
	printf("b=");
	scanf("%d", &b);
	Swap(&a, &b);
	printf("a=%d b=%d", a, b);
	return 0;
}