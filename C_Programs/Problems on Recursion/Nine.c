/*Write a recursive program which display below pattern.  
Input :  6 
Output :   A B C D E F  */

#include<stdio.h>



void Display(int iNo)
{
    static int i=1;
     static char ch='A';
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