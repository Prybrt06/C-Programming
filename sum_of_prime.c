#include<stdio.h>
#include<math.h>

int isPrime(int a)
{
    int check = 1;

    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            check = 0;
            break;
        }
    }

    return check;
}

int main()
{
    int ans = 0;

    for(int i=10;i<=20;i++)
    {
        if(isPrime(i)==1)
        {
            ans += i;
        }
    }

    printf("%d\n",ans);
}