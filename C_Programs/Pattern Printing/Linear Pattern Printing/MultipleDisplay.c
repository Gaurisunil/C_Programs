/// Write a program which accept N and print first 5 multiples of N. 
 // Input :  4  Output :  4  8  12  16  20 
   
   #include<stdio.h>
       void MultipleDisplay(int iNo)
       {
           int iCnt=0,iAns=0;
           for(iCnt=1;iCnt<=5;iCnt++)
           {
               iAns=iCnt*iNo;
           
               printf("%d\t",iAns);
           }
       }
          int main()
          {
              int iValue=0;
              printf("enter the Number");
              scanf("%d",&iValue);
              MultipleDisplay(iValue);
              return 0;

          }