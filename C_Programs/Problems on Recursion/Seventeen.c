

 /* Write a recursive program which accept string from user and count white spaces. 
Input : HE llo WOr lD 
Output : 3  */
#include<stdio.h>

int White(char *str)
{
   static int iCnt=0;
   if(*str!='\0')
   {
       if(*str==' ')
       {
           iCnt++;
       }
       str++;
       White(str);
   }
return iCnt;
}

int main()
{
    int iRet=0;
    char Arr[20];
    printf("enter the string\n");
    scanf("%[^'\n']s",Arr);
    iRet=White(Arr);
    printf("%d",iRet);
    return 0;
}