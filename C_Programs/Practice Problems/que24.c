
/*Write a program which number from user and display below pattern.  
Input :   7846 
Output :   7 8 4 6   
		   7 8 4 
           7 8     
		   7  */

#include<stdio.h>
void Pattern(int iNo)
{
	int iDigit=0,i=0,j=0,iNo1=iNo,iRev=0,iCnt=0,iNo2=iNo,iDigit1=0,iRev1,iNo3;
	
	while(iNo1>0)
	{
		iDigit=iNo1%10;
		iRev=iRev*10+iDigit;
		iNo1=iNo1/10;
		iCnt++;
	}
	
	for(i=1;i<=iCnt;i++)
	{
		iNo=iRev;
		for(j=1;j<=iCnt;j++)
		{	
				if(i<=j)
				{					
					
					iDigit=iNo%10;
					printf("%d\t",iDigit);
					iNo=iNo/10;
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

