#include<stdio.h>
int main()
{
	float p,t,si,r;	
	printf("Enter the value of principal amount: ");
	scanf("%f",&p);
	printf("Enter the Time Period: ");
	scanf("%f",&t);
	printf("Enter the rate of interest ");
	scanf("%f",&r);
	si=(p*r*t)/100;
	printf("The value of the Simpleinterest is = %.f\n",si);
	return 0;
}
