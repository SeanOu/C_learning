//����������A, B, C��A������N��(N > 1)����Բ��, �̵ĳߴ����µ������α�С.Ҫ�����й�������Բ������C�ˣ�
//1.ÿ��ֻ���ƶ�һ��Բ�̣�
//2.���̲��ܵ���С�����棬�ɽ�Բ����ʱ����B��, Ҳ�ɽ���A���Ƴ���Բ�������ƻ�A��, ����������ѭ���������������ƶ��Ĺ��̡�
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int step = 0; //����ȫ�ֱ���step��¼����
void move(int i, char form, char to) {
	printf("��%-2d��,����%d�����Ӵ�%c�ƶ���%c\n", ++step, i, form, to);
}
void Hanio(int n, char a, char b, char c) {
	if (n == 0)
	{
		return;
	}
	Hanio(n - 1, a, c, b); //��n-1��A���ϵ�����ͨ��C���ƶ���B��
	move(n, a, c);  //��A���ϱ��Ϊn�������ƶ���C��
	Hanio(n - 1, b, a, c); //�ٽ�B���ϵĵ�n-1������ͨ��A���ƶ���C��
}
int main() {
	int n;
	printf("�����뺺ŵ�����ж��ٸ�Բ�̣�\n");
	scanf("%d", &n);
	Hanio(n, 'A', 'B', 'C'); //��n��Բ�̴�A��ͨ��B���ƶ���C��
	system("pause");
	return 0;
}