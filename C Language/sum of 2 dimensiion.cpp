#include<stdio.h>
#include<conio.h>
int main()
{
	int a[2][3],b[2][3],c[2][3],i,j;
	for (i=0; i<=1; i++)
	{
		for (j=0; j<=2; j++)
		{
			scanf("%d",&a[i][j]);
			scanf("%d",&b[i][j]);
			c[2][3]=a[i][j]+b[i][j];
		}
	}
	for (i=0; i<=1; i++)
	{
		for (j=0; j<=2; j++)
		{
			printf("%d",c[2][3]);
		}
	}
	return 0;
}
