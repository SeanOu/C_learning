#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int my_strlen(char* str) {
	int count = 0;
	while (*str != '\0') {
		count++;
		str++;
	}
	return count;
}
int main() {
	char arr[] = { "hello" };
	int len = my_strlen(arr);//���鴫��,����ȥ�Ĳ�������,���ǵ�һ��Ԫ�صĵ�ַ
	printf("len = %d\n", len);
	return 0;
}