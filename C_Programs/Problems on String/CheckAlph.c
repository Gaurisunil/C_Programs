
//Accept Character from user and check whether it is alphabet or not (A-Z a-z). 
//Input :  F 
//Output :  TRUE 
//Input :  & 
//Output :  FALSE 



#define TRUE 1
#define FALSE 0
#include <stdio.h>
typedef int BOOL;

BOOL CheckAlph(char ch)
{
    if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
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


bRet=CheckAlph(cValue);

if(bRet==TRUE)
{
    printf("It is  character\n");
}
else
{
    printf("It is not  character\n");
}
return 0;
}


