#include<stdio.h>
int main() {
	int arr[] = { 1,3,6,2,9,7,11,5,10,12 };
	int max = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i;
	for (i = 0; i < sz; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	printf("最大值为:%d", max);
	return 0;
}