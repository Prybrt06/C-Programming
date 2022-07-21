#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    int sum = 0;
    int evenSum = 0;
    int oddSum = 0;

    for(int i=1;i<=(a/2);i++)
    {
        if(a%i==0)
        {
            if(i%2==0)
            {
                evenSum += i;
            }

            else
            {
                oddSum += i;
            }

            sum += i;
        }
    }

    int noOfDigits = 0;
    int temp = a;

    while(temp!=0)
    {
        noOfDigits++;

        temp /= 10;        
    }

    int avg = (1.0*sum)/noOfDigits;

    printf("Sum of Even factors : %d\nSum of Odd factors : %d\nAverage of all factors : %d\n",evenSum,oddSum,avg);

    return 0;
}