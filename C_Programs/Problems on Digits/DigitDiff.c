//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits. 
//Input :  2395   Output :  -15 (2 - 17) 
//Input :  1018   Output :  6 (8 - 2) 
//Input :  8440   Output :  16  (16 - 0) 
//Input :  5733   Output :  -18 (0 - 18)


#include<stdio.h>
      int DigitDiff(int iNo)
      {
          int iDigit=0;
          int iEven=0;
          int iOdd=0;
          int iDiff=0;
            if(iNo<0)
            {
                iNo=-iNo;
            }
            while(iNo!=0)
            {
                iDigit=iNo%10;
                if((iDigit%2)==0)
                {
                    iEven=iEven+iDigit;
                }
                else
                {
                    iOdd=iOdd+iDigit;
                }
                iNo=iNo/10;
            }

            iDiff=(iEven-iOdd);
      }
      int main()
      {
          int iValue=0;
          int iRet=0;
          printf("enter the Number");
          scanf("%d",&iValue);
          iRet=DigitDiff(iValue);
          printf("Digits difference is %d",iRet);
          return 0;
      }