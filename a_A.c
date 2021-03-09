#include<stdio.h>
int main()
{
	char x = 'a';
	printf("请输入一个小写字母:\n");
	scanf("%c",&x);
	if(x >= 'a' && x <= 'z')
		x = x - 32;
	printf("转为大写字母：%c\n",x);
}
