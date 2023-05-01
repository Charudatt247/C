#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter any year");
	scanf("%d",&a);
	{
	if (a%4==0 && a%100!=0)
	{
		printf("%d is leap year\n",a);
	}
	else
	{
		printf("%d is not leap year\n",a);
	}
	}return 0;
}
