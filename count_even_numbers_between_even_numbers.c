#include<stdio.h>
int main()
{
    int n,arr[100],i,j,k,c=0,d=0,e=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            c=i;
            break;
        }
    }
    for(j=n-1;j>=0;j--)
    {
        if(arr[j]%2==0)
        {
            d=j;
            break;
        }
    }
    for(k=c+1;k<d;k++)
    {
        if(arr[k]%2==0)
        {
            e++;
        }
    }
    printf("%d",e);
}