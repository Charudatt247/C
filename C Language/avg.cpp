#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a[100],n,sum=0;
	cout<<"\narray size ";
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<=n-1;i++)
	{
		sum = sum +a[i];
	}
	int avg = sum/n;
	cout<<"\n Sum is "<<avg;
	getch();
}
