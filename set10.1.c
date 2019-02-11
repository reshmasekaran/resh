#include <stdio.h>

int main()
{
    int l,b,h,surface,vol;
    scanf("%d %d %d",&l,&b,&h);
    surface=2*(b*l+l*h+h*b);
    vol=l*b*h;
    printf("%d",vol);
    printf("%d",surface);
}
    
