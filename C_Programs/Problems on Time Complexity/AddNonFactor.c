//write a program which accept number from user and return summation of all its non factors////
//ip:12    op:50
//ip:10    op:37

#include<stdio.h>
       int AddNonFactor(int iNo)
       {  
        
         int iCnt=0;
         int iSum=0;
           if(iNo<0)
           {
               iNo=-iNo;
           }
           for(iCnt=1;iCnt<iNo;iCnt++)
           {  
               if((iNo%iCnt)!=0)
               {
                   iSum=iSum+iCnt;
               }
           }
           return iSum;
       }
          int main()
          {
               int iValue=0;
              int iRet=0;
               printf("Enter the Numbers");
               scanf("%d",&iValue);
               iRet=AddNonFactor(iValue);
               printf("Summation of nonfactor is %d",iRet);
               
               return 0;
          }