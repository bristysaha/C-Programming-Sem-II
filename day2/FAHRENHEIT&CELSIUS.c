#include<stdio.h>  
int main() 
{   
   float f1,c1,f2,c2;  
   printf("Enter the temp in celsius= ");
   scanf("%f",&c2);
  f1=(c2*9/5)+32;  
   printf("Temperature in fahrenheit is: %.2f\n",f1);
   printf("Enter the temp in fahrenheit= ");
   scanf("%f",&f2);
   c1=(f2-32)*5/9;
    printf("Temperature in celsius is: %.2f\n",c1);
    return 0;  
    }
    
