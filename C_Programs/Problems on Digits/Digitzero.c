//Write a program which accept number from user and check whether it contains 0 in it or not. 
//Input :  2395  Output :  There is no Zero 
//Input :  1018 Output :  It Contains Zero 
//Input :  9000 Output :  It Contains Zero 
//Input :  10687 Output :  It Contains Zero 

   #include<stdio.h>
     typedef int BOOL;
     #define True 1
     #define False 0

     
     BOOL Digitszero(int iNo)
     {   
         int iDigit=0;
       while(iNo!=0)
       {
           iDigit=iNo%10;
    
       
          if(iDigit==0)
          {
              return True;
          }
          else if(iDigit!=0)
          {
              return False;
          }
        iNo=iNo/10;
       }

     }
     int main()
     {
         int iValue=0;
         BOOL bRet=False;
         printf("enter the Number ");
         scanf("%d",&iValue);
         bRet=Digitszero(iValue);
         if(bRet==True)
         {
             printf("It contain Zero");

         }
         else
         {
             printf("There is no Zero");
         }
         return 0;
     }

