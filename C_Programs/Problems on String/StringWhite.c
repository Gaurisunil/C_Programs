 //Write a program which accept string from user and count number of white spaces 
//Input :   “MarvellouS” 
//Output :   0 
//Input :   “MarvellouS Infosystems” 
//Output :   1 
//Input :   “MarvellouS Infosystems by Piyush Manohar Khairnnar” 
//Output :   5



#include<stdio.h>


int WhiteSpace(char Str[])
{
    int iCnt=0;
    if(Str==NULL)
    {
        return -1;

    }
    while(*Str!='\0')
    {
        if(*Str==' ')
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

    iRet=WhiteSpace(arr);
    printf("%d",iRet);
    return 0;
}