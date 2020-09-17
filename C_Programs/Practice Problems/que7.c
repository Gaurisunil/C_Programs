
// Write a program which accept string from user and return length of largest word. 
//Input :   “Marvellous Multi OS Infosystems” 
//Output :   11 

#include<stdio.h>


int wordCount(char *str)
{
    int iCnt=0,iMax=0,iMax1=0;
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
            int iMax=0;
             while((*str!=' ')&&(*str!='\0'))
            {  
                iMax++;
                str++;
            }
           iCnt++; 
           if(iMax>iMax1)
           {
               iMax1=iMax;
           }
        }
        
    }
return iMax1;
}

int main()
{
    char arr[50]= "Marvellous infosystems";

    int iRet=0;
    iRet=wordCount(arr);
    printf("%d\n",iRet);
    return 0;
}