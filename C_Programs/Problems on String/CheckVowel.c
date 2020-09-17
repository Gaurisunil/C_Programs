 //Write a program which accept string from user and check whether it contains vowels in it or not. 
//Input :   “marvellous” 
//Output :   TRUE 
//Input :   “Demo” 
//Output :   TRUE 
//Input :   “xyz” 
//Output :   FALSE 




#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(char Str[])
{
    int iCnt=0;
    
    while(*Str!='\0')
	{
        if((*Str=='a')||(*Str=='i')||(*Str=='u')||(*Str=='o')||(*Str=='e'))
        {
            return TRUE;
        }
		
		Str++;
	}
}
int main()
{
    BOOL bRet=FALSE;
    char arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);

   bRet= Check(arr);
    if(bRet==TRUE)
{
    printf("contains vowels ");
}
	else
	{
		printf("contains  not vowels ");
	}
    return 0;
}