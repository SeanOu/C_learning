#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;//������Ϊ�٣��ұ߾Ͳ�������
	i = a++ || ++b || d++;//�����棬��߾Ͳ�������
	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
	return 0;
}