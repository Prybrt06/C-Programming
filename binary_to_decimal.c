#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number in Binary form : ");

    scanf("%d",&a);

    int ans = 0;
    int lastDigit;
    int multiplier = 1;

    while(a!=0)
    {
        lastDigit = a%10;
        ans += (lastDigit*multiplier);
        multiplier *= 2;
        a /= 10;
    }

    printf("The decimal form of the number is : %d",ans);

    return 0;
}