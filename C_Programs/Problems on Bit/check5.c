
// Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32. 
#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;


#define  True 1 
#define False 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask=0,iResult=0;
    iMask=0x80000001;
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