/// Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9)) 
//Input :  10   Output :  -12.2222 (10 - 32) * (5/9)
//Input :  34   Output :  1.11111 (34 - 32) * (5/9)

#include<stdio.h>
double FhtoCs(float fTemp)
{
    float celsius=0.0;
    float celsius1=0.0;
    celsius = (fTemp - 32);
   celsius1=(celsius * 0.55555555);
    return (celsius1);
}
   int main()
   {
       float fValue=0.0;
       double dRet=0.0;
       printf("enter the temperature");
       scanf("%f",&fValue);
       dRet=FhtoCs(fValue);
       printf("celsius is %f",dRet);
       return 0;
       
   }