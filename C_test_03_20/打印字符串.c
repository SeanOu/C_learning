#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr[] = "abcdef";
	int i;
	int len = strlen(arr);
	for (i = 0; i < len; i++) {
		printf("%c ", arr[i]);
	}
	return 0;
}