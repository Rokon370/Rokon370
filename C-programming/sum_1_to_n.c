#include<stdio.h>
int main()
{
    int a,i,sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i=i+1)
    {
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}