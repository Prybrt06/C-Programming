#include<stdio.h>

int main()
{
    float inch;

    scanf("%f",&inch);

    float cm = 2.54 * inch;

    printf("%f", cm);

    return 0;
}