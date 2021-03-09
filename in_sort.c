#include<stdio.h>

//插入维持有序

int main()
{
	int m1,m2,m3,m4,m5;
	int a[5];
	int i,temp;
	printf("请从键盘输入5个整数\n");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	a[0] = m1;
	a[1] = m2;
	a[2] = m3;
	a[3] = m4;
	a[4] = m5;
	for(i = 0;i < 5;i++)
		printf("原始数据：%d ",a[i]);
	printf("\n");
	for(i = 0;i < 5;i++)
	{
		if(a[i] > a[i+1])
		{
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;

		}
	}
	printf("请输入要插入的数据：\n");
	scanf("%d",&a[6]);
	for(i = 0;i < 6;i++)

		if(a[i] > a[i+1])
		{
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
			printf("插入后的数据：%d",a[i]);
		}

}
