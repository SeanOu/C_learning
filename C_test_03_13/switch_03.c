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
		//此处case 3并无break结束，程序会继续执行case 4;
	case 4:m++;
		break;
	}
	printf("m=%d,n=%d\n", m, n);
	return 0;
}
//此题要十分注意break的用法，case 1、case 2、case 3没有break,
//因此case3里的switch语句结束后，会继续执行case 4，因此输出为m = 5,n = 3;
