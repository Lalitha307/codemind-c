#include<stdio.h>
int main()
{
    int n,i,r,sum,p,a,b;
    scanf("%d",&n);
    for(i=n-1;i>0;i--)
    {  p=i,sum=0;
        while(p)
        {
            r=p%10;
            sum=(sum*10)+r;
            p=p/10;
        }
        if(sum==i)
        {
        a=i;
        break;
        }
    }
    for(i=n+1; ;i++)
    {  p=i,sum=0;
        while(p)
        {
            r=p%10;
            sum=(sum*10)+r;
            p=p/10;
        }
        if(sum==i)
        {
        b=i;
        break;
        }
    }
    if(n-a == b-n)
    printf("%d %d",a,b);
    else
    printf("%d",a);
}