#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>//strcpy����ͷ�ļ�
int main() {
	char arr1[] = { "hello world!" };
	char arr2[] = { "######################" };
	strcpy(arr2, arr1);//�����ַ���arr1��arr2����ȥ
	printf("%s\n", arr2);
	return 0;
}