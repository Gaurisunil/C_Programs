/*Write a program which accept string from user and print below pattern. 
Input :   “Marvellous” 
Output :   M a r v e l l o u s   
		   M a r v e l l o u    
		   M a r v e l l o     
		   M a r v e l l    
		   M a r v e l    
		   M a r v e    
		   M a r v    
		   M a r    
		   M a     
		   M 
 
Input :   “PPA” 
Output :   P P A  
		   P P    
		   P */ 

#include<stdio.h>

void Pattern(char *str)
{
	int iCnt=0;
	char *First=str;
	char *Last=str;
	
	while(*Last !='\0')
	{
		Last++;
	}
	
	while(*str !='\0')
	{
		while(First <Last)
		{
			printf("%c\t",*First);
			First++;
			iCnt++;
		}

		
		while(iCnt>0)
		{
			iCnt--;
			First--;
		}
		printf("\n");
		str++;
		Last--;
	}
}

int main()
{
	char arr[50]="Gauri";
	
	Pattern(arr);
	
	return 0;
}