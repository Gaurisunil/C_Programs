

//Accept Character from user and check whether it is digit or not (0-9). 
//Input :  7 
//Output :  TRUE 
//Input :  d 
//Output :  FALSE 
#define TRUE 1
#define FALSE 0
#include <stdio.h>
typedef int BOOL;

BOOL CheckDigit(char ch)
{
    if((ch>=48)&&(ch<=57))
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


bRet=CheckDigit(cValue);

if(bRet==TRUE)
{
    printf("It is Digit\n");
}
else
{
    printf("It is not Digit\n");
}
return 0;
}


