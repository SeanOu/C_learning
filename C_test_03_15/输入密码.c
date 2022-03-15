#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
int main() {
	int i = 0;
	char password1[20] = { 0 };
	printf("请设置密码:");
	scanf("%s", password1);
	char password2[20] = { 0 };
	for (i = 0; i < 3; i++) {
		printf("请输入密码:");
		scanf("%s", password2);
		if (strcmp(password2, password1) == 0) {    
			//==不能用来比较两个字符串是否相等，应该使用另一个库函数-strcump
			printf("登录成功\n");
			break;
		}
		else {
			printf("密码错误\n");
		}
	}
	if (i == 3) {
		printf("三次密码输入错误，程序结束\n");
	}
	return 0;
}
