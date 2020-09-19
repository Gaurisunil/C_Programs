
/* Write a recursive program which accept string from user and count number of characters. 
Input : Hello 
Output : 5 */
#include<stdio.h>


int String(char *Str)
{
    static int iCnt=0;
    if(*Str!='\0')
    {
        iCnt++;
        Str++;
        String(Str);
    }
    return iCnt;
}
int main()
{
    int iRet=0;
    char Arr[10];
    printf("Enter the String\n");
    scanf("%[^'\n']s",Arr);
    iRet=String(Arr);
    printf("%d",iRet);
    return 0;
}