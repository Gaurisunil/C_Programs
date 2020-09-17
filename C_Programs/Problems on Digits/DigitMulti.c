//Write a program which accept number from user and return multiplication of all digits. 
//Input :  2395  Output :  270 
//Input :  1018 Output :  8 
//Input :  9440 Output :  144 
//Input :  922432 Output :  864 


#include<stdio.h> 
     int DigitMulti(int iNo)
     {  int iDigit=0;
        int iMult=0;
        iMult=1;
         if(iNo<0)
         {
             iNo=-iNo;
         }
         while(iNo!=0)
         {
             iDigit=iNo%10;
             if(iDigit>0)
             {
                 iMult=iMult*iDigit;

             }
             iNo=iNo/10;

         }
         return iMult;
     }
     int main()
     {
         int iValue=0;
         int iRet=0;
         printf("enter the number");
         scanf("%d",&iValue);
         iRet=DigitMulti(iValue);
         printf("Digits multiplication is %d",iRet);
         return 0;

     }