// Accept number from user and display below pattern. 
//Input :  5  
//Output : 1 * 2 * 3 * 4 * 5 * 


#include<stdio.h>
void PatternSecond(int iNo)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
        printf("#\t");
    }
}

int main()
{
    int iValue=0;
    printf("Enter the Number");
    scanf("%d",&iValue);
    PatternSecond(iValue);
    return 0;

}