//Write a program which accept string from user and toggle the case. 
//Input :   “Marvellous Multi OS” 
//Output :   mARVELLOUS mULTI os 



#include<stdio.h>
    void Display(char Str[])
    {
    while(*Str!='\0')
    {
        if((*Str>='A')&&(*Str<='Z'))
   {
    *Str=*Str+32;
    }
else if((*Str>='a')&&(*Str<='z'))
{
    *Str=*Str-32;
    }
Str++;
    }
    }



    
    int main()
{
    
    char arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);

    Display(arr);
    printf("%s",arr);
    return 0;
}