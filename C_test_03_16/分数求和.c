//题目:分数求和
//内容:计算1/1-1/2+1/3-1/4......+1/99-1/100
#include<stdio.h>
int main() {
	int i = 0;
	double count = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++) {
		1 / i;
		count += flag * 1.0 / i;
		flag = - flag;
	}
	printf("分数和为:%lf", count);
	return 0;
}