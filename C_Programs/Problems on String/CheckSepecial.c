// Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *). 
//Input :  % 
//Output :  TRUE 
//Input :  d 
//Output :  FALSE 



#define TRUE 1
#define FALSE 0
#include <stdio.h>
typedef int BOOL;

BOOL CheckSpecial(char ch)
{
    if((ch>=32)&&(ch<=47)||(ch>=58)&&(ch>=64)||(ch>=91)&&(ch<=96)||(ch>=123)&&(ch<=126))
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


bRet=CheckSpecial(cValue);

if(bRet==TRUE)
{
    printf("It is special  character\n");
}
else
{
    printf("It is not special character\n");
}
return 0;
}


