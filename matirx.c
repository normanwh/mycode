#include<stdio.h>

int main()
{
	int i,j,sum;
	sum=0;
	int matrix[3][3] = {{3,6,9},{2,5,8},{10,11,5}};
	for(i = 0;i < 3;i++)
		sum = sum + matrix[i][i];
	printf("sum=%d\n",sum);

}
