/////Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius) 
//Input :  5.3    Output :  88.2026  
// Input :  10.4    Output :  339.6224 
  
  #include<stdio.h>
     double Circle(float fRadius)
     {
         float PI=0.0;
         PI=3.14;
         double Area=0.0;
          Area=PI*fRadius*fRadius;
          return (Area);
     }
         int main()
         {
             float fValue=0.0;
             double dRet=0.0;
             printf("enter the Radius");
             scanf("%f",&fValue);
             dRet=Circle(fValue);
             printf("Area of Radius is %f",dRet);
             return 0;

         }