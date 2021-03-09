#include<stdio.h>

#define MAXLINE 50
//从键盘输入若干个学生成绩，负数时截止，统计最大最小值

int main()
{
	int i,j,temp;
	int x;
	int a[MAXLINE];
	while(scanf("%d",&x) > 0)
	{
		i = 0;
		a[i] = x;
		i++;
	}
	j = 0;
	if(a[j] > a[j+1])
	{
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
	}
	printf("最高成绩为：%d,最低成绩为：%d",a[i],a[0]);
}
