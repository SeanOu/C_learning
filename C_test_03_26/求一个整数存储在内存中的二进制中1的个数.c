#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	int i = 0;
	for (i = 0; i < 32; i++) {
		if (1 == ((num >> i) & 1)) {
			count++;
		}
	}
	////ͳ��num�Ĳ����м���1
	//while (num) {
	//	if (num % 2 == 1) {
	//		count++;
	//		num = num / 2;
	//	}
	//}//����ͳ�Ƹ���
	printf("%d\n", count);
	return 0;
}