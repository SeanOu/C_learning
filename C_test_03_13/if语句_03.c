#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 0;
	int b = 2;
	if (a == 1) {
		if (b == 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");
	return 0;
}

//����Ϊ�жϳ������Ϊ"hehe"������"haha",����Ĵ��룬else�����ǵ�һ��if���������"haha";
//������Ĵ��룬��Ȼ�﷨û������д���淶�������������⣬����else�����ǵڶ���if�����Բ��������;

//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
