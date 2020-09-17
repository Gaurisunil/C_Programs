 //Write a program which accept string from user and accept one character. Check whether that character is present in string or not. 
//Input :   “Marvellous Multi OS”    e 
//Output :   TRUE 
//Input :   “Marvellous Multi OS”    W 
//Output :   FALSE 


#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkChar(char Str[],char ch);
int main()
{
    char arr[20];
    char cValue='\0';
    BOOL bRet=FALSE;
    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);
    //printf("%s",arr);
    
    printf("Enter the Character\n");
    scanf("\n");
    scanf("%c",&cValue);
    bRet=ChkChar(arr,cValue);

    if(bRet==TRUE)
    {
        printf("Character Found\n");
    }
    else
    {
        printf("Character not Found\n");
    }
    return 0;
}

BOOL ChkChar(char* Str,char ch)
{
    
    while(*Str!='\0')
    {
        
        if(*Str==ch)
        {
            return TRUE;
        }
        
        Str++;
    }
}
