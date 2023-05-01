#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the number of line");
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		if(n%2==0)
		{
		if(i<=n/2)
		{
			for (k=1; k<=n/2-i+1; k++)
			{
				printf(" ");
			}
			for (j=1; j<=i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		if (i>n/2)
		{
			for (k=1; k<=i-(n/2); k++)
			{
				printf(" ");
			}
			for (j=1; j<=(n-i)+1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		}
		else
		{	
		if(i<=n/2)
		{
			for (k=1; k<=n/2-i+2; k++)
			{
				printf(" ");
			}
			for (j=1; j<=i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		if (i>n/2)
		{
			for (k=1; k<=i-(n/2); k++)
			{
				printf(" ");
			}
			for (j=1; j<=(n-i)+1; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		}
	}
	return 0;
}
