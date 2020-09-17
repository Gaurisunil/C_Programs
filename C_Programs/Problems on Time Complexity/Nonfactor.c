#include<stdio.h>
       void NonFactor(int iNo)
       {  
        
         int iCnt=0;
           if(iNo<0)
           {
               iNo=-iNo;
           }
           for(iCnt=1;iCnt<iNo;iCnt++)
           {  
               if((iNo%iCnt)!=0)
               {
                   printf("%d\n",iCnt);
               }
           }
       }
          int main()
          {
               int iValue=0;
            
               printf("Enter the Numbers");
               scanf("%d",&iValue);
               NonFactor(iValue);
               
               return 0;
          }