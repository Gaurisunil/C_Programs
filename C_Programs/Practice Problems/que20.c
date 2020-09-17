
/*Write a program which accept two strings from user and concat alternate characters from second string at the end of first string. 
Input :   “Marvellous”    “Infosystems” 
Output :   MarvellousIfsses */
#include<stdio.h>

void strCatX(char *str1,char *str2)
{
	if(str1==NULL)
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
	while(*str2 != '\0')
	{
		*str1=*str2;
		str1++;
		str2=str2+2;
	}
}
int main()
{
	char arr[20]="Marvellous";
	char brr[20]="Infosystems";
	
	strCatX(arr,brr);
	
	printf("%s",arr);
	return 0;
}