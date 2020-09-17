
 //Accept Character from user and check whether it is capital or not (A-Z). 
//Input :  F 
//Output :  TRUE 
//Input :  d 
//Output :  FALSE 

#define TRUE 1
#define FALSE 0
#include <stdio.h>
typedef int BOOL;

BOOL CheckCapital(char ch)
{
    if((ch>='A')&&(ch<='Z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

printf("Enter the character\n");
scanf("%c",&cValue);


bRet=CheckCapital(cValue);

if(bRet==TRUE)
{
    printf("It is Capital  character\n");
}
else
{
    printf("It is not Capital character\n");
}
return 0;
}


