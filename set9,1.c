#include <stdio.h>

int main()
{
    int a,b,diff,diff1;
    scanf("%d%d",&a,&b);
    diff=a-b;
    if(diff>0)
    {
        diff1=diff;
    }
    else
    {
        diff1=diff*-1;
        
    }
printf("%d",diff1);
    return 0;
}
