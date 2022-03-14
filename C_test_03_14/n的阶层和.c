#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i,z;
	scanf("%d", &z);
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= z; n++) {
		ret = 1;//每次循环需要重新赋值ret=1，否则ret值会保留下来;
		for (i = 1; i <= n; i++) {
			ret = ret * i;
		}//计算n的阶层;
		sum = sum + ret;//计算10的阶层和;
	}
	printf("%d的阶层和为:%d", z, sum);
	return 0;
}
