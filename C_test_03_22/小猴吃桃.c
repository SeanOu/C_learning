#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x = 1;
	int i = 0;
	for (i = 0; i < 6; i++) {
		x = (x + 1) * 2;
	}
	printf("%d\n", x);
	return 0;
}
//С��һ����ժ�����ɸ����ӣ�����ͳԵ�һ���һ�����ڶ���Ե�ʣ�µ�һ���һ������7��ʱֻʣ��1����
//��С�ﹲժ�˶��ٸ�����