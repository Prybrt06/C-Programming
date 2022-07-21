#include<stdio.h>
#include<math.h>

int main()
{
    int count = 0;
    int a;
    scanf("%d",&a);

    if(a<0)
    {
        printf("Wrong Input\n");
    }

    else
    {
        int temp = a;

        while(temp!=0)
        {
            count++;
            temp /= 10;
        }

        int temp2 = a;
        int lastDigit;
        int check = 0;

        while(temp2!=0)
        {
            lastDigit = temp2%10;

            check += pow(lastDigit,count);
            temp2 /= 10;
        }

        if(check==a)
        {
            printf("Narcissistic\n");
        }

        else
        {
            printf("Not Narcissistic");
        }
    }    

    return 0;
}