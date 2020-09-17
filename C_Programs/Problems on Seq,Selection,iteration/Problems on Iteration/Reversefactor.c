 //write a program which accept number from user and display its factors in reverse order./////
 ///ip:12    op:6 4 3 2 1
 ///ip:10     op:5 2 1
 
 #include<stdio.h>
       void ReverseFactor(int iNo)
       {  
        
         int iCnt=0;
           if(iNo<0)
           {
               iNo=-iNo;
           }
           for(iCnt=iNo/2;iCnt>=1;iCnt--)
           {  
               if((iNo%iCnt)==0)
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
               ReverseFactor(iValue);
               
               return 0;
          }