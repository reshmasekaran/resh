#include<stdio.h>
#include<conio.h>
	void main()
	{
	int num1,num2,num3;
	clrscr();
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2)
	{
	if(num1>num3)
	{
	printf("%d",num1);
	}
	else
	{
	printf("%d",num3);
	}
	}
	else if(num2>num3)
	{
	printf("%d",num2);
	}
	else
	{
	printf("%d",num3);
	}
	getch();
	}
