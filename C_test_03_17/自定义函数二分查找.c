#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Find(int arr2[], int x, int sz2) {
	int left = 0;
	int right = sz2 - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (x < arr2[mid]) {
			right = mid - 1;
		}
		else if (x > arr2[mid]) {
			left = mid + 1;
		}
		else {
			return mid;
		}
	}
	if (left > right) {
		return -1;
	}
}
int main() {
	int arr[] = { 1,3,4,5,7,8,9,10,12,17 };
	int k;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("������Ҫ���ҵ�����Ԫ��:");
	scanf("%d", &k);
	int ret = Find(arr, k, sz);
	if (ret == -1) {
		printf("�Ҳ���%d������Ԫ���±�", k);
	}
	else {
		printf("%d������Ԫ���±�Ϊ:%d", k, ret);
	}
	return 0;
}