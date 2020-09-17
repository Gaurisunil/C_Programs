//3. Write a program which checks whether 7th & 15th & 21st , 28th bit is On or OFF. 

#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;


#define  True 1 
#define False 0

BOOL CheckBit(UINT iNo)
{
    UINT iMask=0,iResult=0;
    iMask=0x08104020;
    iResult=iNo&iMask;
    if(iResult==iMask)
    {
        return True;
    }
    else
    {
        return False;
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