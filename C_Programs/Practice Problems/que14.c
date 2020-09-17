
/*Write a program which accept string from user and print below pattern. 
Input :   “Marvellous” 
Output :   M A R V E L L O U S   
		   M A R V E L L O U S    
		   M A R V E L L O U S   
		   M A R V E L L O U S    
		   M A R V E L L O U S    
		   M A R V E L L O U S   
		   M A R V E L L O U S   
		   M A R V E L L O U S   
		   M A R V E L L O U S   
		   M A R V E L L O U S */

#include<stdio.h>

void Pattern(char *str)
{
	int iLen=0,i=0,j=0;
	char *First=str;
	char *Last=str;

	while(*First !='\0')
	{
		while(*Last !='\0')
		{
			if((*Last>='a')&&(*Last<='z'))
			{
				*Last=*Last-32;
			}
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
		First++;
	}
			

}

int main()
{
	char arr[20]="Marvellous";
	
	Pattern(arr);
	
	return 0;
}