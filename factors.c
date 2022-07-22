#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    int sum = 0;
    int evenSum = 0;
    int oddSum = 0;

    int noOfFactors = 0;

    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            noOfFactors++;

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

    int temp = a;

    float avg = (1.0*sum)/noOfFactors;

    printf("Sum of Even factors : %d\nSum of Odd factors : %d\nAverage of all factors : %f\n",evenSum,oddSum,avg);

    return 0;
}