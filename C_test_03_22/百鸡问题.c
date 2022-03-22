#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x, y, z;
	int i = x + y + z;
	int j = 6 * x + 4 * y + z;
		if (i == 100 && j == 200) {
			printf("%d:%d:%d", x, y, z);
		}
	return 0;
}
//假定小鸡每只0.5元，公鸡每只2元，母鸡每只3元，现在有100元要求买100只鸡，问共有几种买鸡方案？