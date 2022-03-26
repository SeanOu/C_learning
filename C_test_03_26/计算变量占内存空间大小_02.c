#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));//sizeof大小，由s说了算
	printf("%d\n", s);
	return 0;
}