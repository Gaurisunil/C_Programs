//Write a program which accept string from user and convert it into upper case. 
//Input :   “Marvellous Multi OS” 
//Output :   MARVELLOUS MULTI OS 




#include<stdio.h>
    void Display(char Str[])
    {
    while(*Str!='\0')
    {
        if((*Str>='a')&&(*Str<='z'))
   {
    *Str=*Str-32;
}
Str++;
    }
    }



    
    int main()
{
    int iRet=0;
    char arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);

    Display(arr);
    printf("%s",arr);
    return 0;
}