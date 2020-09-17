
/*Write a program which accept two strings from user and concat second string at the end of first string in reverse order.  
Input :   “Marvellous”    “Python” 
Output :   MarvellousnohtyP */
#include<stdio.h>

void strCatX(char *str1,char *str2)
{
	char *Start=str2;
	char *End=str2;
	char temp,temp1;
	int iCnt=0;
	if(str1== NULL)
	{
		return;
	}
	if(str2==NULL)
	{
		return;
	}
	
		while(*str1 !='\0')
		{
			str1++;
		}
	
		while(*End !='\0')
		{
			End++;
			
		}
		End--;
		
		while(Start<=End)
		{
			temp=*Start;
			*Start=*End;
			*End=temp;
			
			Start++;
			End--;	
			//iCnt++;
		}
		
		
		while(*str2 !='\0')
		{

			*str1= *str2;
			*str1++;
			*str2++;
		}
		
	*str1='\0';
}

int main()
{
	char arr[20];
	char brr[20];
	
	printf("Enter the strings\n");
	scanf("%s",&arr);
	
	printf("Enter second string\n");
	scanf("%s",&brr);
	
	strCatX(arr,brr);
	printf("%s",arr);
	
	return 0;
}