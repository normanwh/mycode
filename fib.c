#include<stdio.h>

int Funct(int n)
{
	int result;
	if(n == 0 || n == 1)
		return 1;
	result = Funct(n - 1) + Funct(n - 2);
	return result;
}
int main()
{
	int ret ,n;
	scanf("%d",&n);
	ret=Funct(n);
	printf("ret=%d\n",Funct(n));
}
