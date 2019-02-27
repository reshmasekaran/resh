#include <stdio.h>

int main(void) 
{
	int num,i,j,flag=1;
	scanf("%d",&num);
	for(s=2;s<=num;s++)
	{
		if(num%s==0)
		{
			flag=1;
			for(i=2;i<=s/2;i++)
			{
			if(s%i==0)
			{
			flag=0;
			break;
			}
			}
		
	
	if(flag==1)
	{
		printf("%d ",s);
	}
		}
	}
	return 0;
}
