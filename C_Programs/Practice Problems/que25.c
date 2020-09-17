/*write a program which number from user and display below pattern.  
Input :   7846 
Output :   6    
		   6 4   
		   6 4 8   
		   6 4 8 7 	*/
#include<stdio.h>

void Pattern(int iNo)
{
	int iDigit=0,iCnt=0,i=0,j=0,iRev=0,iNo1=iNo;
	
	while(iNo1>0)
	{
		iDigit=iNo1%10;
		iCnt++;
		iNo1=iNo1/10;
	}
	
	
	for(i=1;i<=iCnt;i++)
	{
		iNo1=iNo;
		for(j=1;j<=iCnt;j++)
		{
			if(i>=j)
			{
			
				iDigit=iNo1%10;
				printf("%d",iDigit);
				printf("\t");
				iNo1=iNo1/10;
			}
				
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

	
