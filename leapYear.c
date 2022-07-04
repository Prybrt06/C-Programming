#include<stdio.h>

int main()
{
    int year;
    printf("Enter the Year :");
    scanf("%d",&year);

    if(year%4==0)
    {
        if(year%100==0 && year%400!=0)
        {
            printf("Not a leap year\n");
        }

        else
        {
            printf("It's a leap year\n");
        }
    }

    else
    {
        printf("Not a leap year\n");
    }

    return 0;
}