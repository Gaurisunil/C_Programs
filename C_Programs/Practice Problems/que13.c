
/*Write a program which accept string from user and print below pattern. 
Input :   “Marvellous” 
Output :   M     
		   M a   
		   M a r    
		   M a r v    
		   M a r v e     
		   M a r v e l   
		   M a r v e l l    
		   M a r v e l l o     
		   M a r v e l l o u     
		   M a r v e l l o u s 
Input :   “PPA” 
Output :   P     
		   P P    
		   P P A */
#include<stdio.h>

void Pattern(char *str)
{
	int iLen=0,i=0,j=0;
	char *First=str;
	char *Last=str;
	char *Ch=str;
	
	while(*str !='\0')
	{ 	
		while(Last <= str)
		{
			printf("%c\t",*Last);
			Last++;
			iLen++;
		}
		
		while(iLen>0)
		{	
			Last--;
			iLen--;
		}
		printf("\n");
		str++;
	}
}

int main()
{
	char arr[20]="Marvellous";
	
	Pattern(arr);
	
	return 0;
}