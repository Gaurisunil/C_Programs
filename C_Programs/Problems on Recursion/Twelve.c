   /* Write a recursive program which accept number from user and return summation of its digits. 
Input :  879 
Output :  24 */

#include<stdio.h>


int Display(int iNo)
{
   int iDigit=0;
   static int iSum=0;
    if(iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+iDigit;
        iNo=iNo/10;
        Display(iNo);
    }
    return iSum;
}
int main()
{

    int iValue=0;
    int iRet=0;
    printf("Enter the value\n");
    scanf("%d",&iValue);


   iRet= Display(iValue);
   printf("%d",iRet);
    return 0;
}