#include<stdio.h>
#include<conio.h>
#include<stdlib.h>>
int main()
{
	int a,b,c,n;
	printf("********SIMPLE CALCULATOR******** \n #####CDS pvtltd#####");
	do
	{
    printf("\nenter 1 for Addition");
	printf("\nenter 2 for Subtraction");
	printf("\nenter 3 for Multiplication");
	printf("\nenter 4 for Division");
	printf("\nenter 5 for Exit");
		printf("\n\n\nENTER ANY NO.");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("enter the two no \na=");
				scanf("%d",&a);
				printf("b=");
				scanf("%d",&b);
				c=a+b;
				printf("c=%d",c);
				break;
			case 2:
				printf("enter the two no \na=");
				scanf("%d",&a);
				printf("b=");
				scanf("%d",&b);
				c=a-b;
				printf("c=%d",c);
				break;
			case 3:
				printf("enter the two no \na=");
				scanf("%d",&a);
				printf("b=");
				scanf("%d",&b);
				c=a*b;
				printf("c=%d",c);
				break;
			case 4:
				printf("enter the two no \na=");
				scanf("%d",&a);
				printf("b=");
				scanf("%d",&b);
				c=a/b;
				printf("c=%d",c);
				break;
			case 5:
				exit(0);
				break;
			default:
			    printf("enter correct no.");
		}
	}while (1);
	return 0;				
}
