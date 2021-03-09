#include<stdio.h>
//判断是否为三角形以及三角形类型

int main()
{
	int a,b,c;
	printf("输入三条边：\n");
	scanf("%d %d %d",&a,&b,&c);
	//判断是否为三角形
	if(a + b > c && a - b < c )
	{
		printf("这三条边能组成三角形\n");
		if(a == b && a == c)
			printf("此三角形为等边三角形\n");
		else if(a == b || a == c || b == c)
			printf("此三角形为等腰三角形\n");
		if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a))
			printf("此三角形为直角三角形\n");

	}
	else
	{
		printf("这三条边不能组成三角形\n");
	}
}
