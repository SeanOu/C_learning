#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char password[20] = { 0 };
	printf("����������: ");
	scanf("%s", &password);
	char ch = 0;
	while ((ch = getchar()) != '\n') {
		;
	}//��Ϊ����������������\n��������Ҫ�õ�ѭ����֪�����뵽\nֹͣѭ��;
	 //��������getchar()����ܵ�\n���򲻻���ȷִ��if/else���;
	printf("��ȷ��(Y/N): ");
	char ret = getchar();
	if (ret == 'Y') {
		printf("ȷ�ϳɹ�!");
	}
	else {
		printf("ȷ��ʧ��!");
	}
	return 0;
}