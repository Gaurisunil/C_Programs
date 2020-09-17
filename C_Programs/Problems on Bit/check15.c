//Write a program which accept one number from user and toggle contents of first 
//		and last nibble of the number . Return modified number.

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
		UINT iResult=0,iMask=0;
		
		iMask=0Xf000000f;
		
		iResult = iNo^iMask;
		
		return iResult;
}

int main()
{
	UINT iValue=0;
	UINT iRet=0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	iRet= ToggleBit(iValue);
	printf("%d",iRet);
	
	return 0;
}
