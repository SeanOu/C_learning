#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,8,9,10,12 };
	int i;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k;
	printf("请输入查找的数组元素:");
	scanf("%d", &k);
	for (i = 0; i < sz; i++) {
		if (k == arr[i]) {
			printf("数组元素%d的下标为:%d", k, i);
			break;
		}
	}
	if (i == sz) {
		printf("找不到%d的下标", k);
	}
	return 0;
}