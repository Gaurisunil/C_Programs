
/* Write a program which accept string from user and replace each occurrence of first character of each word into capital case. 
Input :   “marvellous infosystems by Piyush khairnar” 
Output :  “Marvellous Infosystems By Piyush Khairnar” */

#include<stdio.h>


void wordCount(char *str)
{
    
    
    while(*str!='\0')
    {
        if(*str==' ')
        {
            while((*str==' ')&&(*str!='\0'))
            {
                str++;
            }
            
        }
        else if(*str!=' ')
        {

            if((*str>='a')&&(*str<='z'))
            {
                *str=*str-32;
                str++;
            }
             while((*str!=' ')&&(*str!='\0'))
            {
                str++;
            }
            
        }
        
    }

}

int main()
{
    char arr[50]= "marvellous multi os";

    
    wordCount(arr);
    printf("%s",arr);
    return 0;
}