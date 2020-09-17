/*Write a program which number from user and display below pattern.  
Input :   7846 
Output :   7 8 4 6   
		   7 8 4 6
           7 8 4 6
		   7 8 4 6*/

#include<stdio.h>

void Pattern(int iNo)
{
	int iDigit=0,iCnt=0,i=0,j=0,iRev=0,iNo1=0;
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}

	for(i=1;i<=4;i++)
	{
		iNo1=iRev;
		
			while(iNo1>0)
			{
				iDigit=iNo1%10;
				printf("%d",iDigit);
				printf("\t");
				iNo1=iNo1/10;
			}
		
		printf("\n");
	}
	
	
	
}
int main()
{
	int iValue=7846;
	
	Pattern(7846);
	return 0;
}