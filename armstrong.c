#include<stdio.h>
#include<math.h>
int main()
{   int num,temp,count=0,remainder,sum=0;
    printf("enter the number");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    { count++;
       temp= temp/10;
    }
    temp=num;
    while(temp>0)
    { remainder=temp%10;
        sum=sum+pow(remainder,count);
       temp= temp/10;
    }
    if(sum==num)
    { printf("yes");
    }
    else
    { printf("no");
    }
    return 0;
}
