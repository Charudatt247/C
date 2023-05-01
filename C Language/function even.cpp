#include<stdio.h>
#include<conio.h>
void even(int);
int main ()
{
	int n;
	printf("enter any no.");
	scanf("%d",&n);
	even (n);
	getch();
}
void even(int x)
{
	int a;
	a=x*2;
	printf("\n%d these no. is even no.",a);
}
