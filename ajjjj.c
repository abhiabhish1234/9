#include <stdio.h>
#include<string.h>
int main()
{
    int num,s,a,i=0,m[10],l;
    printf("enter the number:");
    scanf("%d",&num);
    printf("enter no of digits want to be delete : ");
    scanf("%d",&s);
    b=num;
    while(a>0)
    {
        m[i]=a%10;
        i++;
        a=a/10;
    }
    l=i-t-1;
    printf("number = ");
    for(i=l;i>=0;i--)
    {
        printf("%d",m[i]);
    }
    return 0;
}
