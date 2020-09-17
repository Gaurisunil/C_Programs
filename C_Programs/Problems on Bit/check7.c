 //Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number


#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
		int iResult=0;
		UINT iMask=0;
		
		iMask= 0XFFFFFDBF;			
		
		iResult =iNo&iMask;		
		
		return iResult;
}

int main()
{
	UINT iValue=0;
	int iRet=0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	 
	 iRet= OffBit(iValue);
	 
	 printf("%d",iRet);
	 return 0;
}