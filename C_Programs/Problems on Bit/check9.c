//Q.4  Write a program which accept one number from user and  toggle 
	//	7th and 10th bit of that number if it is on.Return modified number
	//	Input:137
	//	Output:713
		


#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
		int iResult=0;
		int iMask=0;
		
		iMask= 0X00000240;
		
		iResult =iNo ^ iMask;
		
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