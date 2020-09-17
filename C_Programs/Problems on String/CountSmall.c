 //Write a program which accept string from user and count number of small characters. 
//Input :   “Marvellous” 
//Output :   9 


#include<stdio.h>


int Small(char Str[])
{
    int iCnt=0;
    if(Str==NULL)
    {
        return -1;

    }
    while(*Str!='\0')
    {
        if((*Str>='a')&&(*Str<='z'))
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

    iRet=Small(arr);
    printf("%d",iRet);
    return 0;
}