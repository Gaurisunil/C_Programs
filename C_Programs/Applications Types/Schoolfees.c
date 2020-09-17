//Application of school fees////
    ///AS school is primary there are 4 stdards 1 to 4. School fees of each stdard is diffrent.For First standard fees are 8900,for second stdard 12790,for third stdard 21000 and for fourth stdard fees 23450 .We have to accept stdandard from user and display corresponding fees.
    ///ip:2     op:12790
    ///ip:4     op:23450
    ///ip:6     op:Wrong input
 
#include<stdio.h>
      int Schoolfees(int iStd)
      {
               if(iStd>5)
               {
                   printf("Wrong Input");
                   }
             else if(iStd==1)
             {
                 printf("Schoolfees is 8900 Rs");
             }      
            else if(iStd==2)
            {
                printf("Schoolfees is 12790 Rs");
            }
            else if(iStd==3)
             {
                 printf("Schoolfees is 21000 Rs");
             }  
             else if(iStd==4)
             {
                 printf("Schoolfees is 23450 Rs");
             }          
      }
           int main()
           {
               int iValue=0;
               int iRet=0;
               printf("Enter the Std");
               scanf("%d",&iValue);
               iRet=Schoolfees(iValue);
               return 0;
           }