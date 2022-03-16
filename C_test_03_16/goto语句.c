#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	again:
	printf("hello\n");
	goto again;
	return 0;
}