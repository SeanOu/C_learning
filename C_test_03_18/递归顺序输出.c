#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(int n) {
	if (n > 9) {
		print(n / 10);
	}
	printf("%d ", n%10);
}

int main() {
	unsigned int i = 0;
	scanf("%d", &i);
	print(i);
	return 0;
}
//要求:
//输入:1234
//按顺序输出:1 2 3 4
