#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i = 0;
	while (i < 10) {
		i++;
		if (i == 5)
			continue;//continue��break��ͬ���˴�i==5ʱ���Ͳ�ִ��printf�ˣ�����Ӵ˴��ٴη��ص�while��ʼѭ��;
		printf("%d ", i);
	}
	return 0;
}
