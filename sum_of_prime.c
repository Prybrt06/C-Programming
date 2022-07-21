#include<stdio.h>

int isPrime(int a)
{
    int check = 0;

    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            check = 1;
            break;
        }
    }

    return check;
}

int main()
{
    int ans = 0;

    for(int i=50;i<=500;i++)
    {
        if(isPrime(i)==1)
        {
            ans += i;
        }
    }

    printf("%d",ans);
}