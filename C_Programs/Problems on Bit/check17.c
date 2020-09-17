/*Write a program which accept two numbers from user and display position of common ON bits from that two numbers. 
Input :  10 15  (1010  1111) Output :  2 4 
*/

#include<stdio.h>

typedef unsigned int UINT;

#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1,UINT iNo2)
{
	UINT iPos=1,iResult=0,iNo=0,iMask=0X1;
	iResult= iNo1 & iNo2;
	while(iMask <= iResult )
	{
        
		
		if((iMask & iResult)!= 0)
		{
			printf("%d\t",iPos);
			
		}
		iPos++;
		iMask=iMask<<1;
	
	}
	
}	
int main()
{
	UINT iValue1=0,iValue2=0 ;

	printf("Enter the two numbers\n");
	scanf("%d\t%d",&iValue1,&iValue2);
	
	CommonBits(iValue1,iValue2);
	
	return 0;
}


