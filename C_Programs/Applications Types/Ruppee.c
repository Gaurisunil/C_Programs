///Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees.  
///Input :  10  Output :  700 
///Input :  3    Output :  210  
///Input :  1200  Output :  84000 


#include<stdio.h>
     int Rupee(int iNo)
{   int iAns=0;
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
         iAns=iNo*70;
         return iAns;
}
     int main()
     {
         int iValue=0;
         int iRet=0;
         printf("enter the Indian Cuurency");
         scanf("%d",&iValue);
         iRet=Rupee(iValue);
         printf("Amount in Us Doller to corresponding Indian rupees is %d",iRet);
         return 0;
     }