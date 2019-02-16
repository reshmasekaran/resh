#include<stdio.h>
int main()
{
    int a,mul=1,rem;
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        mul=mul*rem;
        a=a/10;
    }  printf("%d",mul);
    return 0;
}
