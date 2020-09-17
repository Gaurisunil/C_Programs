

/*write a program which accept two strings from user and check whether both the strings are equal or not without considering its case.  
Input :   “MarvelloUS”    “MARveLLous” 
Output :   TRUE */
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL StrCmpX(char *str1,char *str2)
{
	if(str1== NULL)
	{
		return FALSE;
	}
	if(str2==NULL)
	{
		return FALSE;
	}
	while((*str1 != '\0')&&(*str2 != '\0'))
	{
		if(*str1 != *str2)
		{
			if((*str1>='A')&&(*str1<='Z'))
			{
				*str1=*str1+32;
			}
			else if((*str1>='a')&&(*str1<='z'))
			{
				*str1=*str1-32;
			}
		}
		if(*str1 != *str2)
		{
			break;
		}
		str1++;
		str2++;
	}
	
	if((*str1=='\0')&&(*str2=='\0'))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	char arr[20];
	char brr[20];
	BOOL bRet=FALSE;
		
	printf("Enter first string\n");
	scanf("%s",&arr);
	
	
	printf("Enter second string\n");
	scanf("%s",&brr);
	
	bRet=StrCmpX(arr,brr);
	
	if(bRet==TRUE)
	{
		printf("These two strings are equal");
	}
	else
	{
		printf("These two strings are not equal");
	}
	return 0;
}