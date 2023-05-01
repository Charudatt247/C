#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter the no. a=");
	scanf("%d",&a);
	printf("enter the no. b=");
	scanf("%d",&b);
	printf("enter the no. c=");
	scanf("%d",&c);
	if (a<b && a<c)
	{
		printf("%d,is smaller than %d,%d",a,b,c);
	}
	if (b<a && b<c)
	{
		printf("%d,is smaller than %d,%d",b,a,c);
	}
	else
	{
		printf("%d,is smaller than %d,%d",c,a,b);
	}
	return 0;
}
