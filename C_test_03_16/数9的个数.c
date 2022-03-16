#include<stdio.h>
int main() {
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 10 == 9) {
			count++;
		}
		else if (i / 10 == 9) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}