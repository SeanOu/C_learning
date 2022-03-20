//有三根杆子A, B, C。A杆上有N个(N > 1)穿孔圆盘, 盘的尺寸由下到上依次变小.要求按下列规则将所有圆盘移至C杆：
//1.每次只能移动一个圆盘；
//2.大盘不能叠在小盘上面，可将圆盘临时置于B杆, 也可将从A杆移出的圆盘重新移回A杆, 但都必须尊循上述两条规则。求移动的过程。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int step = 0; //设置全局变量step记录步数
void move(int i, char form, char to) {
	printf("第%-2d步,将第%d个盘子从%c移动到%c\n", ++step, i, form, to);
}
void Hanio(int n, char a, char b, char c) {
	if (n == 0)
	{
		return;
	}
	Hanio(n - 1, a, c, b); //第n-1个A柱上的盘子通过C柱移动到B柱
	move(n, a, c);  //将A柱上编号为n的盘子移动到C柱
	Hanio(n - 1, b, a, c); //再将B柱上的第n-1个盘子通过A柱移动到C柱
}
int main() {
	int n;
	printf("请输入汉诺塔中有多少个圆盘：\n");
	scanf("%d", &n);
	Hanio(n, 'A', 'B', 'C'); //将n个圆盘从A柱通过B柱移动到C柱
	system("pause");
	return 0;
}