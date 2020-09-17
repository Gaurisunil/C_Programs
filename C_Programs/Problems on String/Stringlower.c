//Write a program which accept string from user and convert it into lower case. 
//Input :   “Marvellous Multi OS” 
//Output :   marvellous multi os 


#include<stdio.h>
    void Display(char Str[])
    {
    while(*Str!='\0')
    {
        if((*Str>='A')&&(*Str<='Z'))
   {
    *Str=*Str+32;
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