#include<stdio.h>
#include<conio.h>
void prime();
int main()
{
	prime();
}
void prime()
{
	int a,i,n,c=0;
	printf("Enter any no.");
	scanf("%d",&a);
	if (a==1)
	printf("%d number is prime no.",a);
	for (i=2; i<=a-1; i++)
	{
		if (a%i==0)
		{
			a=1;
			break;
		}
    }
	if (a==0)
	printf(" number is prime no.");
	if (a==1)
	printf(" number is not prime no.");

}
