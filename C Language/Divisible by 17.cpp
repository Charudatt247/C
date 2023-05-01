#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter any no.");
	scanf("%d",&a);
	if(a%17==0)
	{
		printf("%d is divisible by 17",a);
	}
	else
	{
		printf("%d is not divisible by 17",a);
	}
	return 0;
}
