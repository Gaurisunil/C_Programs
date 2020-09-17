
 //Write a program which checks whether 7th & 8th & 9th bit is On or OFF
#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;


#define  True 1 
#define False 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask=0,iResult=0;
    iMask=0x000001C0;
    iResult=iNo&iMask;
    if(iResult==0)
    {
        return False;
    }
    else
    {
        return True;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=False;
    printf("enter the number");
    scanf("%d",&iValue);
    bRet=CheckBit(iValue);
    if(bRet==True)
    {
    printf("bit is on");

    }
    else
    {
        printf("bit is off");
    }
    return 0;
}