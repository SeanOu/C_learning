#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Fib(int x) {
	int a = 1;
	int b = 1;
	int c = 1;
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
	Fib(n);
	printf("%d\n", Fib(n));
	return 0;
}