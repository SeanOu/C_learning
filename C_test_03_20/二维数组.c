#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[2][4] = { {1,2,3,4},{4,3,2,1} };
	int i = 0;
	for (i = 0; i < 2; i++) {
		int j;
		for (j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}