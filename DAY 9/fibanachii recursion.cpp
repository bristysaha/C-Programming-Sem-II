#include<stdio.h>
int f(int n,int a,int b)
{
	if(n!=0)
	{
	printf("%d",a);
	return f(n-1,b,a+b);}
}
int main()
{
	int x;
	printf("Enter the Numbers: ");
	scanf("%d",&x);
	printf("The Fibanachii Series is: ");
	printf("%d",f(x,0,1));
	return 0;
}
