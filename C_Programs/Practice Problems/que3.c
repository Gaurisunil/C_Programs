//Write a program which 2 strings from user and check whether first N contents of two strings are equal or not. (Implement strcmp() function). Note : If third parameter is greater than the size of second string then concat whole string after first string. 
//Input :   “Marvellous Infosystems”    “Marvellous Logic Building”    10 
//Output :  TRUE 

#include<stdio.h>
#define True 1
#define False 0

typedef int BOOL;

BOOL Strcmpx( char *src,  char *des,int iCnt)
{
    if((src ==NULL)||(des==NULL))
    {
        return False; 
    }
    while((*src != '\0')&&(*des != '\0')&&(iCnt!=0))
    {
        if(*src != *des)
        {
            break;
        }
        src++;
        des++;
        iCnt--;
    }
    if(iCnt==0)

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
    
   int iValue=0;
    BOOL bRet=True;
    char arr[50]="logc";
    char brr[30]="logic buldi";
    printf("enter the number\n");
    scanf("%d",&iValue);

   bRet= Strcmpx(arr,brr,iValue);
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
