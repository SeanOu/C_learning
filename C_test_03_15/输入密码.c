#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
int main() {
	int i = 0;
	char password1[20] = { 0 };
	printf("����������:");
	scanf("%s", password1);
	char password2[20] = { 0 };
	for (i = 0; i < 3; i++) {
		printf("����������:");
		scanf("%s", password2);
		if (strcmp(password2, password1) == 0) {    
			//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ����һ���⺯��-strcump
			printf("��¼�ɹ�\n");
			break;
		}
		else {
			printf("�������\n");
		}
	}
	if (i == 3) {
		printf("��������������󣬳������\n");
	}
	return 0;
}
