/* Write a recursive program which display below pattern.  
Input :   5 
Output :   5 4 3 2 1 */


#include<stdio.h>



void Display(int iNo)
{
    static int i=5;
    if(i>0)
    {
        printf("%d\t",i);
        i--;
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