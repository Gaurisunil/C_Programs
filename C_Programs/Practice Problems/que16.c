/*Write a program which accept two strings from user and display length of both the strings.  
Input :   “Marvellous”    “Infosystems” 
Output :   10 11 */		
#include<stdio.h>

void Pattern(char *str1,char *str2)
{
	int iCnt1=0,iCnt2=0;
	
	if(str1== NULL)
	{
		return;
	}
	if(str2==NULL)
	{
		return;
	}
	
	while (*str1 != '\0')
	{
		iCnt1++;
		str1++;
	}
    
    printf("%d\n",iCnt1);
	while(*str2 != '\0')
	{
		iCnt2++;
		str2++;
	}
    
printf("%d",iCnt2);
}

int main()
{
	char arr[20];
	char brr[20];
	
	printf("Enter first string\n ");
	scanf("%s",&arr);
	
	printf("Enter Second string\n ");
	scanf("%s",&brr);
	
	Pattern(arr,brr);
	return 0;
}