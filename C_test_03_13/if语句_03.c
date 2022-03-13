#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 0;
	int b = 2;
	if (a == 1) {
		if (b == 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");
	return 0;
}

//此题为判断程序输出为"hehe"，还是"haha",上面的代码，else跟的是第一个if，所以输出"haha";
//而下面的代码，虽然语法没错，但书写不规范，很容易造成误解，其中else跟的是第二个if，所以不输出内容;

//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}
