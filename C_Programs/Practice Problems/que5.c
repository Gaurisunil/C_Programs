
///Accept string from user and check whether the string is palindrome or not without considering its case.  
//Input :   “1abccBA1”
//Output :   TRUE 
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL StrPallindrome(char *str)
{
	char *start=str;
	char *end=str;
	
	if(str==NULL)
	{
		return FALSE;
	}
	
	while(*end !='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		
		if(*start != *end)
		{
			
			if((*start>='A')&&(*start<='Z'))
			{
				*start=*start+32;
			}
			else if((*start>='a')&&(*start<='z'))
			{
				*start=*start-32;
			}
		}
		if(*start != *end)
		{
			break;
		}
		start++;
		end--;
	}
	
	if(start < end)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}


int main()
{
	BOOL bRet;
	char arr[20]="1abccBA1";
	
	bRet=StrPallindrome(arr);
	
	if(bRet==TRUE)
	{
		printf("String is palindrome");
	}
	else
	{
		printf("String is not Palindrome");
	}
	return 0;
}