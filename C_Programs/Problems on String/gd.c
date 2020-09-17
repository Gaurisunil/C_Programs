//Write a program which accept string from user and accept one character. Return index of first occurrence of that character. 
//Input :   “Marvellous Multi OS”    M 
//Output :   0 
//Input :   “Marvellous Multi OS”    W 
//Output :   -1 
//Input :   “Marvellous Multi OS”    e 
//Output :   4 

#include<stdio.h>
int CountChar(char *Str,char ch);
int main()
{
    char arr[20];
    char cValue='\0';
    int iRet=0;
   
    printf("Enter the String\n");
    scanf("\n");
    scanf("%[^'\n']s",arr);
   
    printf("enter the charater\n");
    scanf("\n");
    scanf("%c",&cValue);

    iRet=CountChar(arr,cValue);
    printf("%d",iRet);
    return 0;
}
int CountChar(char *Str,char ch)
{
    int iCnt;
    if(Str==NULL)
    {
        return -1;
    }
    for(iCnt=0;Str[iCnt]!='\0';iCnt++)
    {
        if(Str[iCnt]==ch)
        {
          return iCnt;
		}
		
    } 
    
}

