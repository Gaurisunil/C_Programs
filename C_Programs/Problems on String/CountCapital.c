
//Write a program which accept string from user and count number of capital characters. 
//Input :   “Marvellous Multi OS” 
//Output :   4 


#include<stdio.h>


int Capital(char Str[])
{
    int iCnt=0;
    if(Str==NULL)
    {
        return -1;

    }
    while(*Str!='\0')
    {
        if((*Str>='A')&&(*Str<='Z'))
        {
            iCnt++;
        }
            Str++;
        
    }
    return iCnt;
}
int main()
{
    int iRet=0;
    char arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);

    iRet=Capital(arr);
    printf("%d",iRet);
    return 0;
}