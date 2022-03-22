#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x = 1;
	int i = 0;
	for (i = 0; i < 6; i++) {
		x = (x + 1) * 2;
	}
	printf("%d\n", x);
	return 0;
}
//小猴一天内摘了若干个桃子，当天就吃掉一半多一个；第二天吃掉剩下的一半多一个，第7天时只剩下1个了
//问小猴共摘了多少个桃子