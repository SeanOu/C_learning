#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 10;
	char b = 'r';
	char* p = &b;
	int arr[10] = { 0 };
	//sizeof计算变量占内存空间大小,单位是字节
	printf("%d\n", sizeof(a));//整型4个字节
	printf("%d\n", sizeof(b));//一个字符，1
	printf("%d\n", sizeof(p));//8,64位系统
	printf("%d\n", sizeof(arr));//40
	return 0;
}