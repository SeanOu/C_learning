#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char password[20] = { 0 };
	printf("请输入密码: ");
	scanf("%s", &password);
	char ch = 0;
	while ((ch = getchar()) != '\n') {
		;
	}//因为输入的密码后面会跟个\n，所以需要用到循环，知道输入到\n停止循环;
	 //否则后面的getchar()会接受到\n，则不会正确执行if/else语句;
	printf("请确认(Y/N): ");
	char ret = getchar();
	if (ret == 'Y') {
		printf("确认成功!");
	}
	else {
		printf("确认失败!");
	}
	return 0;
}