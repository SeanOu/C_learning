#include<stdio.h>
int main()
{
	int i, j;
	int count = 0;
	for (i = 1; i < 100; i++)
	{
		//�Գ��������ж�
		//���Ȳ���2��(i-1)������
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		//��ʱ�������������ѭ��
		//1.i%j==0,i��������,break����
		//2.2��j��Χ�ڣ��������ֶ���������i;
		if (j == i) { 
			count++;
			printf("%d ", i);
		}
	}
	printf("\n�ܵ���:%d������", count);
	return 0;
}
