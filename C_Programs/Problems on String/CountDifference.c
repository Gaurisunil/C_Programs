 //Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters. 
//Input :   “MarvellouS” 
//Output :   6 (8-2) 



#include<stdio.h>


int Difference(char Str[])
{
    int iCnt1=0;
    int iCnt2=0;
    if(Str==NULL)
    {
        return -1;

    }
    while(*Str!='\0')
    {
        if((*Str>='A')&&(*Str<='Z'))
        {
            iCnt1++;
        }
        else
        {
            iCnt2++;
        }
        
            Str++;
        
    }
    return (iCnt2-iCnt1);
}
int main()
{
    int iRet=0;
    char arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);

    iRet=Difference(arr);
    printf("%d",iRet);
    return 0;
}