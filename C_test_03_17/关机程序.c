#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char input[20] = { 0 };
	int i = 0;
	//ʹ������ػ�
    //shutdown -s -t 60
    //sytem()-ִ��ϵͳ����
	system("shutdown -s -t 60");
	printf("���Լ�����60s��ػ���������'������'ȡ���ػ�\n");
	for (i = 0; i < 2; i++) {
		printf("������:");
		scanf("%s", input);
		if (strcmp(input, "������") == 0) {  //�Ƚ������ַ���
			system("shutdown -a");
			printf("����");
			break;
		}
		else {
			printf("��!!!!!\n");
			if (i == 1) {
				printf("��!!!!!!!!!!!!!!!!!!!!!!!!\n");
				break;
			}
			printf("�ٸ���һ�λ���!\n");
		}
	}
	return 0;
}