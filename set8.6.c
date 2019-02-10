#include <stdio.h>
	
	int main()
	{
	   char a[100],i,j,n;
	   scanf("%s",a);
	   for(i=0;a[i]!='\0';i++);
	   j=i/2;
	   a[j]='*';
	   printf("%s",a);
	    return 0;
	}
Set8.6.c
#include <stdio.h>
	
	int main()
	{
	    int num,i,flag=0;
	    scanf("%d",&num);
	    for(i=2;i<num;i++)
	    {
	        if(num%i==0)
	        {
	            flag=1;
	            break;
	        }
	    
	    }
	    if(flag==1)
	    {
	        printf("yes");
	    }
	     else
	    {
	        printf("no");
	    }
	    return 0;
}
