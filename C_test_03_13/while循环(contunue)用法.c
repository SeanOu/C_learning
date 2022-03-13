#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i = 0;
	while (i < 10) {
		i++;
		if (i == 5)
			continue;//continue与break不同，此处i==5时，就不执行printf了，程序从此处再次返回到while开始循环;
		printf("%d ", i);
	}
	return 0;
}
