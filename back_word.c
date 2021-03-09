#include<stdio.h>

int main()
{
	int i;
	int temp1,temp2;
	int a[5] = {8,6,5,4,1};
	//转换前
	for(i = 0;i < 5;i++)
		printf("%d",a[i]);
	//转换后
	printf("\n");
	temp1 = a[0];
	temp2 = a[1];
	for(i = 0;i < 3;i++)
	{
		a[i] = a[4-i];
	}
	a[3] = temp2;
	a[4] = temp1;
	for(i = 0;i < 5 ;i++)
		printf("%d",a[i]);
	printf("\n");
		
}
