#include<stdio.h>
//统计最高最低成绩

int main()
{
	int g1,g2,g3,g4,g5;
	int a[5];
	int i,temp;
	printf("请输入学生成绩：\n");
	scanf("%d%d%d%d%d",&g1,&g2,&g3,&g4,&g5);
	a[0] = g1;
	a[1] = g2;
	a[2] = g3;
	a[3] = g4;
	a[4] = g5;
	for(i = 0;i < 5;i++)
	{
		if(a[i] > a[i+1])
		{
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
	}
	printf("最高成绩为：%d\n",a[4]);
	printf("最低成绩为：%d\n",a[0]);

}
