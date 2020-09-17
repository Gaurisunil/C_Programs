/// Write a program which returns difference between Even factorial and odd factorial of given number.  
///Input :  5  Output :  -7   (8 - 15)
 ///Input :  -5  Output :  -7   (8 - 15)
///Input :  10  Output :  2895  (3840 - 945)

#include<stdio.h>
       int FactorialDiff(int iNo)
       {   int iAns1=0;
          iAns1=1;
          int iAns2=0;
          iAns2=1;
           int iCnt=0;
           if(iNo<0)
           {
               iNo=-iNo;
           }
           for(iCnt=iNo;iCnt>=1;iCnt--)
           {
            
               
                   if((iCnt%2)==0)
                   {
                       iAns1=iCnt*iAns1;
                   }
                   if((iCnt%2)!=0)
                   {
                       iAns2=iCnt*iAns2;
                   }
               
           }
           return (iAns1-iAns2);
       }
            int main()
            {
                   int iValue=0;
                   int iRet=0;
                   printf("enter the number");
                   scanf("%d",&iValue);
                   iRet=FactorialDiff(iValue);
                   printf("%d",iRet);
                   return 0;


            }