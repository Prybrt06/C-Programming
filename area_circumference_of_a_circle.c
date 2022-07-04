#include<stdio.h>

int main()
{
    int radius;

    scanf("%d",&radius);

    float area = 3.14*radius*radius;

    float circumference = 2*3.14*radius;

    printf("The area of the circle is : %f \nThe circumference of the circle is : %f ",area,circumference);

    return 0;
}