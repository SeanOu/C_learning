#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++) {
		k++;
	}
	return 0;
}
//问题为这个循环循环多少次，答案为0，k=0是赋值而不是判断
//所以k=0，为假，循环结束，循环0次