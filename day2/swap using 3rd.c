#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter the 1st value A= ");
	scanf("%f",&a);
	printf("Enter the 2nd value B= ");
	scanf("%f",&b);
	c=b;
	b=a;
	a=c;
	printf("After swap,value of A= %.f\n",a);
	printf("After swap,value of B= %.f\n",b);
	return 0;
}
