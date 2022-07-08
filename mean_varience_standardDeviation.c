#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    printf("Enter the number of items : ");

    scanf("%d",&a);

    int arr[a];

    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum = 0;

    for(int i=0;i<a;i++)
    {
        sum += arr[i];
    }

    float mean = (1.0*sum)/a;

    printf("The mean is : %f\n",mean);

    float varience_numerator = 0;

    for(int i=0;i<a;i++)
    {
        varience_numerator += (arr[i] - mean)*(arr[i] - mean);
    }

    float varience = (1.0*varience_numerator)/a;

    float standardDaviation = sqrt(varience);

    printf("The varience is : %f\n",varience);
    printf("The Standard Daviation is : %f\n",standardDaviation);
}