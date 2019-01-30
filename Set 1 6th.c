void main()
{
int c;
scanf("%d",&c);
if(c%4==0)
{
if(c%100!=0)
{
if(c%400==0)
{
printf("leap year");
}
}
}
else
{
printf("not");
}
getch();
}
