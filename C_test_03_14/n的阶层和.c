#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i,z;
	scanf("%d", &z);
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= z; n++) {
		ret = 1;//ÿ��ѭ����Ҫ���¸�ֵret=1������retֵ�ᱣ������;
		for (i = 1; i <= n; i++) {
			ret = ret * i;
		}//����n�Ľײ�;
		sum = sum + ret;//����10�Ľײ��;
	}
	printf("%d�Ľײ��Ϊ:%d", z, sum);
	return 0;
}
