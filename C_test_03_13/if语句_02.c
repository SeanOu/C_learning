#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int age = 20;
	if (age < 18)
		printf("δ����\n");
	else if (18 <= age && age < 30)
		printf("����\n");
	else if (30 <= age && age < 40)
		printf("׳��\n");
	else if (40 <= age && age < 50)
		printf("����\n");
	else
		printf("����\n");
	//if (age < 18)
	//	printf("δ����\n");
	//else
	//	printf("����\n");
	return 0;
}