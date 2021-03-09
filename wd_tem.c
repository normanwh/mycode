#include<stdio.h>

//温度转换程序
int func(int f)
{
	int c;
	c = (f - 32) * 5 / 9;
	return c;
}
int main()
{
	int ces,fes;
	printf("请输入华氏温度\n");
	scanf("%d",&fes);
	ces = func(fes);
	printf("转换为摄氏温度为%d\n",ces);

}
