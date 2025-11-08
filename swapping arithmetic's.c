#include<stdio.h>
int main()
{
    int a,b,;
    printf("enter the values a and b ");
    scanf("%d%d",&a,&b);
    {
        a=a+b;
        b=a-b;
        a=a-b;
        printf("enter the values a:%d and b:%d",a,b)
    }
    return 0;
}
