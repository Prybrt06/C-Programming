#include <stdio.h>

int main()
{
	int a;
	int rem,i=1;
	int ans=0;

	printf("Enter a number in decimal form : ");
	scanf("%d",&a);

	while (a!=0)
	{
		rem = a%2;
		a /= 2;
		ans += (rem * i);
		i *= 10;
	}

	printf("The binary form of the number is : %d",ans);
}