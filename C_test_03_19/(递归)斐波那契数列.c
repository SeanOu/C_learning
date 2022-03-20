#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//描述第n个斐波那契数
int count = 0;
int Fib(int x) {
	if (x == 3) {
		count++;//用于测试第3个斐波那契数被计算了多少次
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
//递归解决此题，当n数值较大时，斐波那契数会被重复运算很多次，会导致计算机运算耗时过长，因此用循环解决是较优解