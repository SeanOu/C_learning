#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void bubble_sort(int arr[], int sz2) {
	//确定冒泡排序的趟数;
	int i;
	for (i = 0; i <= sz2 - 1; i++) {
		int flag = 1;//假设这一趟排序的数组已经有序了;
		//每一趟冒泡排序;
		int j = 0;
		for (j = 0; j < sz2 - 1 - i; j++) {  //每一趟排序后，排序次数就会相应减1,10个数组的排序次数为9次，但下标是从0开始，所以不加=;
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//本趟排序的数组没有完全有序;
			}
		}
		if (flag == 1) { //flag==1,说明flag没有被赋值为0,说明数组已经有序了,结束循环;
			break;
		}
	}
}

int main() {
	int arr[] = { 2,3,5,7,1,4,8,10,9,6 };
	//数组名arr就是数组首元素的地址，但是有两个例外:
	//1.sizeof(arr),arr表示整个数组，sizeof(arr)表示计算的整个数组的大小，单位是字节
	//2.&arr时候，arr代表整个数组，&arr,取出的是整个数组的地址
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//对arr进行排序,排成升序;
	bubble_sort(arr, sz);//冒泡排序函数;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
