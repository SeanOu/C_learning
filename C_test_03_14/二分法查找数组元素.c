#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,8,9,10,12 };
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = sz - 1;//���±�
  int k;
  printf("����������Ԫ��:");
	scanf("%d", &k);
	while (left <= right) {
		int mid = (left + right) / 2;//�м�Ԫ���±�
		if (arr[mid] > k) {
			right = mid - 1;//mid-1��Ϊ����������±�
		}
		else if (arr[mid] < k) {
			left = mid + 1;//mid+1��Ϊ����������±�
		}
		else {
			printf("�ҵ���,%d���±�ֵΪ:%d", k, mid);
			break;
		}
	}
	if (left > right) {
		printf("�Ҳ���%d���±�ֵ", k);
	}
	return 0;
}
