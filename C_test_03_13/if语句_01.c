#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int day = 0;
	scanf("%d", &day);
	if (day == 1)
		printf("����һ\n");
	else if (day == 2)
		printf("���ڶ�\n");
	else if (day == 3)
		printf("������\n");
	//......
	else if (day == 7)
		printf("������\n");
	return 0;
}