#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 10;
	char b = 'r';
	char* p = &b;
	int arr[10] = { 0 };
	//sizeof�������ռ�ڴ�ռ��С,��λ���ֽ�
	printf("%d\n", sizeof(a));//����4���ֽ�
	printf("%d\n", sizeof(b));//һ���ַ���1
	printf("%d\n", sizeof(p));//8,64λϵͳ
	printf("%d\n", sizeof(arr));//40
	return 0;
}