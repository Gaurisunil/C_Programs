//Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TURE otherwise return FALSE. 
//Input :  10 2
// Output :  TRUE 




#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
typedef unsigned int UINT;

BOOL ChkBit(UINT iNo, int iPos)
{
	UINT iMask=0X00000001;
	UINT iResult=0;
	
	if((iPos < 1)||(iPos>32))
	{
		return FALSE;
	}
	
	
	iMask = iMask<<(iPos-1);
	
	iResult= iNo & iMask;
	
	if(iResult == iMask)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	UINT iValue=0,iPos=0;
	BOOL bRet=FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	printf("Enter the Position\n");
	scanf("%d",&iPos);
	 
	bRet=ChkBit(iValue,iPos);
	
	if(bRet== TRUE)
	{
		printf("The bit is ON");
	}
	else
	{
		printf("The bit is OFF");
	}
	
	 
	 //printf("%d",iRet);
	 
	 return 0;
}
