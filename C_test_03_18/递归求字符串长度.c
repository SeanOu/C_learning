#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int my_strlen(char* str) {
	if (*str != 0) {
		return (1 + my_strlen(str + 1));
	}
	else
		return 0;
}
int main() {
	char arr[] = { "hello" };
	int len = my_strlen(arr);//数组传参,传过去的不是数组,而是第一个元素的地址
	printf("len = %d\n", len);
	return 0;
}