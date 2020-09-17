

 //Write a program which 2 strings from user and check whether contents of two strings are equal or not. (Implement strcmp() function). 
//Input :   “Marvellous Infosystems”    “Marvellous Infosystems” 
//Output :  TRUE 
#include<stdio.h>
#define True 1
#define False 0

typedef int BOOL;
BOOL Strcmpx( char *src,  char *des)
{
    if((src ==NULL)||(des==NULL))
    {
        return False; 
    }
    while((*src != '\0')&&(*des != '\0'))
    {
        if(*src != *des)
        {
            break;
        }
        src++;
        des++;
    }
    if((*src=='\0')&&(*des=='\0'))

    {
        return True;
    }
    else
    {
        return False;
  }
}
int main()
{
    
   
    BOOL bRet=True;
    char arr[50]="logic";
    char brr[30]="logic";
   bRet= Strcmpx(arr,brr);
    if(bRet==True)
    {
        printf("equal");

    }
    else
    {
        printf("not equal");
    
    }
    return 0;
}
