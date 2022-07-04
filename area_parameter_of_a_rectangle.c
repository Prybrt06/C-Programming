#include<stdio.h>

int main()
{
    int height,breath;

    scanf("%d%d",&height,&breath);

    int area = (height * breath);

    int parameter = 2*(height+breath);

    printf("The area is : %d and the parameter is : %d",area,parameter);

    return 0;
}