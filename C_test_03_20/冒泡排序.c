#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void bubble_sort(int arr[], int sz2) {
	//ȷ��ð�����������;
	int i;
	for (i = 0; i <= sz2 - 1; i++) {
		int flag = 1;//������һ������������Ѿ�������;
		//ÿһ��ð������;
		int j = 0;
		for (j = 0; j < sz2 - 1 - i; j++) {  //ÿһ���������������ͻ���Ӧ��1,10��������������Ϊ9�Σ����±��Ǵ�0��ʼ�����Բ���=;
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;//�������������û����ȫ����;
			}
		}
		if (flag == 1) { //flag==1,˵��flagû�б���ֵΪ0,˵�������Ѿ�������,����ѭ��;
			break;
		}
	}
}

int main() {
	int arr[] = { 2,3,5,7,1,4,8,10,9,6 };
	//������arr����������Ԫ�صĵ�ַ����������������:
	//1.sizeof(arr),arr��ʾ�������飬sizeof(arr)��ʾ�������������Ĵ�С����λ���ֽ�
	//2.&arrʱ��arr�����������飬&arr,ȡ��������������ĵ�ַ
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��arr��������,�ų�����;
	bubble_sort(arr, sz);//ð��������;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	return 0;
}
