#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	//按二进制异或
	//相同为0，相异为1
	int a = 3;
	int b = 5;
	int c = a ^ b;
	printf("%d\n", c);
	return 0;
}