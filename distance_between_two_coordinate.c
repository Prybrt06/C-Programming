#include<stdio.h>
#include<math.h>

int main()
{
    int x1,y1,x2,y2;

    printf("Enter the x and y coordinate of first point : ");

    scanf("%d%d",&x1,&y1);

    printf("Enter the x and y coordinate of second point : ");

    scanf("%d%d",&x2,&y2);

    float ans = ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));

    printf("%f",sqrt(ans));

    return 0;
}