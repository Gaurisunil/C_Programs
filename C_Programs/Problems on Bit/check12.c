 //Write a program which accept one number and position from user and on that bit. Return modified number. 
//Input :  10 3 
//Output :  14 


#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT iPos)
{
	UINT iResult=0,iMask=0;
	
	if((iPos<1)||(iPos>32))
	{
		return 0;
	}
	
	iMask = 0X00000001;
	iMask = iMask << (iPos-1);
	
	iResult=iNo ^ iMask;
	
	return iResult;
}

int main()
{
	UINT iValue=0,iPos=0;
	UINT iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	printf("Enter the Position\n");
	scanf("%d",&iPos);
	
	iRet= OffBit(iValue,iPos);
	printf("%d",iRet);
		
	return 0;
}