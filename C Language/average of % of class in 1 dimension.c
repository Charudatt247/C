#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
	float a[100],c;
	int b=0,n,i;
	printf("Enter the number of students");
	scanf("%d",&n);
	printf("enter percentage of students is");
	for (i=0; i<=n-1; i++)
	{
		scanf("%d",&a[i]);
		b=b+a[i];
	}
	c=b/n;
	cout<<c;
	return 0;
}
