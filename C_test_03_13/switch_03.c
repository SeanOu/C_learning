#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n = 1;
	int m = 2;
	switch (n) {
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n) {
		case 1:n++;
		case 2:m++, n++; break;
		}
		//�˴�case 3����break��������������ִ��case 4;
	case 4:m++;
		break;
	}
	printf("m=%d,n=%d\n", m, n);
	return 0;
}
//����Ҫʮ��ע��break���÷���case 1��case 2��case 3û��break,
//���case3���switch�������󣬻����ִ��case 4��������Ϊm = 5,n = 3;
