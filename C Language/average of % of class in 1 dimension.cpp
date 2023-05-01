#include<stdio.h>
#include<conio.h>
int main()
{
	float a[100];
	int c,b=0,n,i;
	printf("Enter the number of students");
	scanf("%d",&n);
	printf("enter percentage of students is");
	for (i=0; i<=n-1; i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0; i<=n-1; i++)
	{
		b=b+a[i];
	}
	c=b/n;
	printf("Average=%f",b);
	return 0;
}
