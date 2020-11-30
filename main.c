#include <stdio.h>
#include <stdlib.h>
void circle(int r)
{
for(int t=0;t<=3*r;t++)
{
for (int k=0;k<=3*r;k++)
{
if ((pow(t-r,2)+pow(k-r,2)-pow(r,2)<=r)&&(pow(t-r,2)+pow(k-r,2)-pow(r,2)>=-r)) //
{
printf("*");
}
else
{
printf(" ");
}
}
printf("\n");
}
}
int main()
{ int r;
printf("vvedi radius  ");
scanf("%d",&r);
circle(r);
}
