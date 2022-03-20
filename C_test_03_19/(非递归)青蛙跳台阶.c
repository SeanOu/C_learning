//一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法？
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