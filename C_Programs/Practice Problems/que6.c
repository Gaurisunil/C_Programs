
//Write a program which accept string from user count number of words from string  
//Input :   “Marvellous Multi OS” 
//Output :   3 
//Input :   “          Marvellous Multi            OS       Pune” 
//Output :   4 


#include<stdio.h>


int wordCount(char *str)
{
    int iCnt=0;
    if(str==NULL)
    {
        return -1;
    }
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
             while((*str!=' ')&&(*str!='\0'))
            {
                str++;
            }
           iCnt++; 
        }
        
    }
return iCnt;
}

int main()
{
    char arr[50]= "Marvellous Muti os";

    int iRet=0;
    iRet=wordCount(arr);
    printf("%d\n",iRet);
    return 0;
}