#include<stdio.h>
int main()
{
	int i, j;
	int count = 0;
	for (i = 1; i < 100; i++)
	{
		//试除法素数判断
		//首先产生2到(i-1)的数字
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		//此时有两种情况跳出循环
		//1.i%j==0,i不是素数,break结束
		//2.2—j范围内，所以数字都不能整除i;
		if (j == i) { 
			count++;
			printf("%d ", i);
		}
	}
	printf("\n总的有:%d个素数", count);
	return 0;
}
