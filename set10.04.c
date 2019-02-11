#include<stdio.h>
int main()
{
    int a[10],b,n,n1,i=0;
    scanf("%d %d",&n,&n1);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==n1)
        {
            b=a[i];
            printf("%d",b);
        }
    }
    return 0;
}
