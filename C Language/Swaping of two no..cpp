#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("swapping no. is a=%d\nb=%d",a,b);
	return 0;
}
