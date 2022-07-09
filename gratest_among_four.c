#include<stdio.h>

int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }

    else
    {
        return b;
    }
}

int main()
{
    int n1,n2,n3,n4;

    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);

    int ans = max(max(n1,n2),max(n3,n4));

    printf("%d",ans);
}