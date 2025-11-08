#include<stdio.h>
int main()
{
int x,y;
printf("enter the values of x and y");
scanf("%d%d",&x,&y);
if(x>0&&y>0)
  printf("1st quadrant");
else if(x<0&&y>0)
  printf("2nd quadrant");
else if(x<0&&y<0)
  printf("3rd quadrant");
else if(x>0&&y<0)
  printf("4th quadeant");
else if(x==0&&y==0)
  printf("origin");
else if (x==0)
  printf("yaxis");
else if(y==0)
  printf("xaxis");
return 0;}
