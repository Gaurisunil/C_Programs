 /*Q.1 Write a program which accept one number from user and 
		count number of ON (1) bits in it without using % and / 
		operator
		Input:11
		Output:3
	*/

#include<stdio.h>
typedef unsigned int UINT;

int CountOne(UINT iNo)
{
	UINT iCnt=0,iMask=1,iResult=0;
	
	while(iMask <= iNo)
	{
		iResult = iNo & iMask;
		if(iResult !=0)
		{
			iCnt++;
		}
		iMask= iMask << 1;
	}
	return iCnt;
}
int main()
{
	UINT iValue=0,iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=CountOne(iValue);
	printf("%d",iRet);
	
	return 0;
}