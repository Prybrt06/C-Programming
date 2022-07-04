#include<stdio.h>
#include<math.h>

int main()
{
    float length;
    
    scanf("%f",&length);
    
    float breath = (sqrt(3)*length)/2;
    
    float area = (length*breath)/2;
    
    //printf("%.2f", ((signed long)(ans * 100) * 0.01f));

    float ans = floorf(area*100)/100;

    printf("%0.2f",ans);
    
    return 0;
}