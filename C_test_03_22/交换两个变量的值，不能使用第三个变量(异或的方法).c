#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 3;
	int b = 5;
	printf("before:a=%d,b=%d\n", a, b);
	//���ķ���
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after:a=%d,b=%d\n", a, b);
	return 0;
}