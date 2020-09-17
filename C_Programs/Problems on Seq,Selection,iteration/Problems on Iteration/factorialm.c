//Write a program to find factorial of given number.  
//Input :  5  Output :  120   (5 * 4 * 3 * 2 * 1)
//Input :  -5  Output :  120   (5 * 4 * 3 * 2 * 1)
// Input :  4  Output :  24   (4 * 3 * 2 * 1)
 
 #include<stdio.h>
   int factorial(int iNo)

   { int iAns=0;
      int iCnt=0;
        iAns=1;
           if(iNo<0)
           {
               iNo=-iNo;
           }
           for(iCnt=iNo;iCnt>=1;iCnt--)
           {
               iAns=iAns*iCnt;
           }
           return iAns;
   }
         int main()
         {
             int iValue=0;
             int iRet=0;
             printf("enter the number");
             scanf("%d",&iValue);
             iRet=factorial(iValue);
             printf("Multiplction of factorial is %d",iRet);
             return 0;
         }