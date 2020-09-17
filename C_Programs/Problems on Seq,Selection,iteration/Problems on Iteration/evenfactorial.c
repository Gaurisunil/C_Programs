//Write a program to find even factorial of given number.  
//Input :  5     Output :  8   (4 * 2)
//Input :  -5    Output :  8   (4 * 2)
//Input :  10    Output :  3840  (10 * 8 * 6 * 4 * 2)                          

#include<stdio.h>
       int EvenFactorial(int iNo)
       {   int iAns=0;
          iAns=1;
           int iCnt=0;
           if(iNo<0)
           {
               iNo=-iNo;
           }
           for(iCnt=iNo;iCnt>=1;iCnt--)
           {
            
               
                   if((iCnt%2)==0)
                   {
                       iAns=iCnt*iAns;
                       
                   }
               
           }
           return iAns;
       }
            int main()
            {
                   int iValue=0;
                   int iRet=0;
                   printf("enter the number");
                   scanf("%d",&iValue);
                   iRet=EvenFactorial(iValue);
                   printf("%d",iRet);
                   return 0;


            }