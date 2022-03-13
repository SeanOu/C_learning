#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int age = 20;
	if (age < 18)
		printf("未成年\n");
	else if (18 <= age && age < 30)
		printf("青年\n");
	else if (30 <= age && age < 40)
		printf("壮年\n");
	else if (40 <= age && age < 50)
		printf("中年\n");
	else
		printf("老年\n");
	//if (age < 18)
	//	printf("未成年\n");
	//else
	//	printf("成年\n");
	return 0;
}