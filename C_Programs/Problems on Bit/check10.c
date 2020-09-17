//Q.5 	Write a program which accept one number from user and on its first 4 bits. 
		//Return modified number
		
		//Input:73
		//Output79
		

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
		int iResult=0;
		int iMask=0;
		
		iMask= 0X00000006;            //0X0000000f;
		
		iResult =iNo ^ iMask;		  //iNo | iMask;
		
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