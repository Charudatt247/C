#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void sum()
{
	int a,b,c;
	printf("Enter the no. a=");
	scanf("%d",&a);
	printf("Enter the no. b=");
	scanf("%d",&b);
	c=a+b;
	printf("c=%d",c);
}
void sub()
{	
    int a,b,c;
	printf("Enter the no. a=");
	scanf("%d",&a);
	printf("Enter the no. b=");
	scanf("%d",&b);
	c=a-b;
	printf("c=%d",c);
}
void multiple()
{
	int a,b,c;
	printf("Enter the no. a=");
	scanf("%d",&a);
	printf("Enter the no. b=");
	scanf("%d",&b);
	c=a*b;
	printf("c=%d",c);
}
void divide()
{
	int a,b,c;
	printf("Enter the no. a=");
	scanf("%d",&a);
	printf("Enter the no. b=");
	scanf("%d",&b);
	c=a/b;
	printf("c=%d",c);
}
void square()
{
	int a,c;
	printf("Enter the no. a=");
	scanf("%d",&a);
	c=a*a;
	printf("c=%d",c);
}
void cube()
{
	int a,b,c;
	printf("Enter the no. a=");
	scanf("%d",&a);
	c=a*a*a;
	printf("c=%d",c);
}
void squareroot()
{
	int n;
	printf("Enter the no. n=");
	scanf("%d",&n);
	printf("c=%d",sqrt(n));
}
void factorial()
{
	int a,i,b=1;
	printf("Enter the value a=");
	scanf("%d",&a);
	for (i=a; i>=1; i--)
	{
	  b=b*i;	
	}
	printf("Factorial of %d = %d",a,b);
}
int main()
{
	printf("##### SIMPLE CALCULATOR #####");
do
{
	printf("\nEnter 1 for sum");
	printf("\nEnter 2 for subtract");
	printf("\nEnter 3 for multiple");
	printf("\nEnter 4 for divide");
	printf("\nEnter 5 for square");
	printf("\nEnter 6 for cube");
	printf("\nEnter 7 for squareroot");
	printf("\nEnter 8 for factorial");
	printf("\nEnter 0 for exit");
	int ch;
	scanf("\n%d",&ch);
	switch (ch)
	{
		case 1:
			sum();
			break ;
		case 2:
			sub();
			break ;
		case 3:
			multiple();
			break ;
		case 4:
			divide();
			break ;
		case 5:
			square();
			break ;
		case 6:
			cube();
			break ;
		case 7:
			squareroot();
			break ;
		case 8:
			factorial();
			break ;
		case 0:
			exit (0);
			break ;
		default:
		    printf("Enter correct no.");
	}
}
while(1);
}

