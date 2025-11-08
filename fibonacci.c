#include<stdio.h>
int main()
{
int n,a=0,b=1,c,i;
  printf("enter the terms");
  scanf("%d",&n);
printf("fibonacci series");
for(i=0;i<n;i++)
{printf("%d",a);
c=a+b;
b=c;
}
printf("\n");
return 0;
}

