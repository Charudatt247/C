#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1,i,n;
	printf("enter any no. n=");
	scanf("%d",&n);
	for (i=n;  i>=1;  i--)
	{
		a=a*i;
	//	printf("%d, ",a);
	}
	printf("%d",a);
	return 0;
}
