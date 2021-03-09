#include<stdio.h>
#define MAXLINE 100
//因子连乘

int main()
{
	int fec;
	int i,j;
	int a[MAXLINE];
	printf("请输入一个自然数：\n");
	scanf("%d",&fec);
	for(i = 1; i < 100; i++)
		{
			if(fec % i == 0)
			{
				for(j = 0;j < MAXLINE;j++)
					a[j] = i;
			}
		}
	printf("分解结果为：%d = %d * %d * %d \n",a[i]);
}
