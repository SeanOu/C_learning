//一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法？
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