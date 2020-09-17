//Write a program which accept number from user and return the count of even digits. 
//Input :  2395    Output :  1 
//Input :  1018    Output :  2 
//Input :  -1018   Output :  2 
//Input :  8462   Output :  4 

#include<stdio.h> 
int DigitEven(int iNo)
{


    int iDigit=0;
    int iCnt=0;
    while(iNo!=0)
    {
     iDigit=iNo%10;
     if((iDigit%2)==0)
     {
         iCnt++;
     }
     iNo=iNo/10;
    }
    return (iCnt); 
}


int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter the Number");
    scanf("%d",&iValue);
    iRet=DigitEven(iValue);
    printf("Number of frequency of even digit is %d",iRet);
    return 0;
}