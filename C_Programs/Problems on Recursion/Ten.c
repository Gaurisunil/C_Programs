
/* Write a recursive program which display below pattern.  
Input :  6 
Output :   a b c d e f */

#include<stdio.h>



void Display(int iNo)
{
    static int i=1;
     static char ch='a';
    if(i<=iNo)
    {
        printf("%c\t",ch);
        i++;
        ch++;
        
        Display(iNo);
    }

}
int main()
{
    
     int iValue=0;
    printf("enter the numbers\n");
    scanf("%d",&iValue);
    Display(iValue);
    
    
    return 0;
}