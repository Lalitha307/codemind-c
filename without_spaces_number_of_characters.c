#include<stdio.h>
#include<string.h>
int main()
{
    int i,n=0,c=0;
    char str[100];
    scanf("%[^
]s",str);
    n=strlen(str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ')
        c++;
    }
    printf("%d",n-c);
}