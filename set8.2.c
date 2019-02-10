#include <stdio.h>
	
	int main()
	{
	    char s[10],i,j,k[10],count,c=0;
	    scanf("%s",a);
	    for(i=0;s[i]!='\0';i++);
	    count=i;
	    j=0;
	    for(i=0;i<count;i++)
	    {
	        if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'))
	        {
	            c++;
	        }
	    }
	    if(c!=0)
	    {
	        printf("yes");
	    }
	    else
	    {
	        printf("no");
	    }
	    return 0;
	}
