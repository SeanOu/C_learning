//1.��������һ�������
//2.������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//�˵�����;
void Menu() {
	printf("***********************************************\n");
	printf("*******      1.play        0.exit      ********\n");
	printf("***********************************************\n");
}
//��Ϸ����
void Game() {
	int ret = 0;
	int guess = 0;
	int num = 100;
	ret = rand()%100+1;//���������;
	while (1) {
		printf("�������:");
		scanf("%d", &guess);
		if (guess > ret && guess<num) {
			printf("�´���\n");
		}
		else if (guess < ret) {
			printf("��С��\n");
		}
		else if (guess > num) {
			printf("���ֲ��ܴ���100\n");
		}
		else {
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}

}

int main() {
	int input = 0;
	//��ʱ�����������������������
    //time_t time(time_t *timer)
	srand((unsigned int)time(NULL));
	do {
		Menu();
		printf("��ѡ��: ");
		scanf("%d", &input);
		switch (input) {
		case 1:
			Game();
			break;
		case 0:
			printf("��Ϸ����!\n");
			break;
		default :
			printf("ѡ�����!\n");
			break;
		}
	} while (input);
	return 0;
}