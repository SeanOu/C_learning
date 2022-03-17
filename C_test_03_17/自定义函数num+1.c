#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void adds(int *x) {
	(*x)++;
}
int main() {
	int num = 0;
	adds(&num);
	printf("num1 = %d\n", num);
	adds(&num);
	printf("num2 = %d\n", num);
	adds(&num);
	printf("num3 = %d\n", num);
	adds(&num);
	printf("num4 = %d\n", num);
	return 0;
}