 /* Write a recursive program which accept number from user and return its  product of digits.  
Input :  523 
Output :  30 */
#include<stdio.h>


int Display(int iNo)
{
   int iDigit=0;
   static int iSum=1;
    if(iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum*iDigit;
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