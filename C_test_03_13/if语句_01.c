#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int day = 0;
	scanf("%d", &day);
	if (day == 1)
		printf("星期一\n");
	else if (day == 2)
		printf("星期二\n");
	else if (day == 3)
		printf("星期三\n");
	//......
	else if (day == 7)
		printf("星期日\n");
	return 0;
}