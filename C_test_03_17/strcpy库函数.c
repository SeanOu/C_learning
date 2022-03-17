#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>//strcpy函数头文件
int main() {
	char arr1[] = { "hello world!" };
	char arr2[] = { "######################" };
	strcpy(arr2, arr1);//拷贝字符串arr1到arr2里面去
	printf("%s\n", arr2);
	return 0;
}