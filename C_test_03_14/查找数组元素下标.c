#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,8,9,10,12 };
	int i;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k;
	printf("��������ҵ�����Ԫ��:");
	scanf("%d", &k);
	for (i = 0; i < sz; i++) {
		if (k == arr[i]) {
			printf("����Ԫ��%d���±�Ϊ:%d", k, i);
			break;
		}
	}
	if (i == sz) {
		printf("�Ҳ���%d���±�", k);
	}
	return 0;
}