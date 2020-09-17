#include<stdio.h>
   void dis(int iNo)
   {
          int iCnt=0;
           for(iCnt=0;iCnt<iNo;iCnt++)
           {
               printf("Hello\n");
           }
   }
           int main()
           {     int Value=0;
                printf("enter the value");
                   scanf("%d",&Value);
                  dis(Value);
                     return 0;
           }