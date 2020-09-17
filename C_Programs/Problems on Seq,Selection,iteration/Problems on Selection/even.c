//check number is even or odd
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL Check(int iNo)
{
        if((iNo%2)==0)
        {
            return TRUE;
        }
         else
         {
             return FALSE;
         }

}
   int main()
   {
       int iValue=0;
       BOOL bRet=0;
            printf("enter the numbers");
            scanf("%d",&iValue);
            bRet=Check(iValue);
            if(bRet==TRUE)
            {
                printf("Number is even");
                
            }
                 else
                 {
                     printf("Number is not even");

                 }
                 return 0;
   }