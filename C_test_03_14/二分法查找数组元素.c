#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,8,9,10,12 };
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标
  int k;
  printf("请输入数组元素:");
	scanf("%d", &k);
	while (left <= right) {
		int mid = (left + right) / 2;//中间元素下标
		if (arr[mid] > k) {
			right = mid - 1;//mid-1作为新数组的右下标
		}
		else if (arr[mid] < k) {
			left = mid + 1;//mid+1作为新数组的左下标
		}
		else {
			printf("找到了,%d的下标值为:%d", k, mid);
			break;
		}
	}
	if (left > right) {
		printf("找不到%d的下标值", k);
	}
	return 0;
}
