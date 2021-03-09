#include<stdio.h>
#include<math.h>
int main()
{
	int s,s1,s2,s3,i;
	for(i = 100;i <= 999;i++)
	{
		s1 = i % 10;//个位
		s2 = i / 10 % 10;//十位
		s3 = i / 100;//百位
		if(i == pow(s1,3) + pow(s2,3) + pow(s3,3))//判断条件
			printf("%d\n",i);
	}

		
		
		
}
