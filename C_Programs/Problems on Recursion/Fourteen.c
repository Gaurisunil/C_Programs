/* Write a recursive program which accept number from user and return its factorial.  
Input :  5   Output : 120   */

#include<stdio.h>


int Display(int iNo)
{
   
   static int iMuit=1;
    if(iNo>0)
    {
        iMuit=iMuit*iNo;
        
        iNo--;
        Display(iNo);
    }
    return iMuit;
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