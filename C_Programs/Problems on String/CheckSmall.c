 //Accept Character from user and check whether it is small case or not (a-z). 
//Input :  g 
//Output :  TRUE 
//Input :  D 
//Output :  FALSE 


#define TRUE 1
#define FALSE 0
#include <stdio.h>
typedef int BOOL;

BOOL CheckSmall(char ch)
{
    if((ch>='a')&&(ch<='z'))
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


bRet=CheckSmall(cValue);

if(bRet==TRUE)
{
    printf("It is small character\n");
}
else
{
    printf("It is not small character\n");
}
return 0;
}


