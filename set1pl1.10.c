#include <stdio.h>

int main()
{
char s[100],s1[100];
int i,count=0;
printf("Enter two strings:");
scanf("%s%s",&str,&s);
for(i=0;s[i]!='\0'||s1[i]!='\0';i++)
{
if(s[i]!=s1[i])
count++;
}
if(count==1)
printf("Yes");
else
printf("No");
	    return 0;
}
