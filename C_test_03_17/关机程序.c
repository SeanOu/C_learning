#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char input[20] = { 0 };
	int i = 0;
	//使用命令关机
    //shutdown -s -t 60
    //sytem()-执行系统命令
	system("shutdown -s -t 60");
	printf("电脑即将在60s后关机，请输入'我是猪'取消关机\n");
	for (i = 0; i < 2; i++) {
		printf("请输入:");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0) {  //比较两个字符串
			system("shutdown -a");
			printf("可以");
			break;
		}
		else {
			printf("寄!!!!!\n");
			if (i == 1) {
				printf("寄!!!!!!!!!!!!!!!!!!!!!!!!\n");
				break;
			}
			printf("再给你一次机会!\n");
		}
	}
	return 0;
}