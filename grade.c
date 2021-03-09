#include<stdio.h>

int main()
{
	int mark;
	char grade;
	scanf("%d",&mark);
	if(mark >= 60 && mark <= 69)
		printf("%c\n",grade = 'D');
	if(mark >=70 && mark <= 79)
		printf("%c\n",grade = 'C');
	if(mark >= 80 && mark <= 89)
		printf("%c\n",grade = 'B');
	if(mark >= 90 && mark <= 100)
		printf("%c\n",grade = 'A');
}

