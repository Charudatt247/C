#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("enter the no.=");
	scanf("%d",&a);
	if (a%2==0)
	{
		printf("%d is even no.",a);
    }
    if (a%2!=0)
    {
    	printf("%d is odd no.",a);
	}
	return 0;
}
