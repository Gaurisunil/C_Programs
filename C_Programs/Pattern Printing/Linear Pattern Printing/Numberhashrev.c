// Accept number from user and display below pattern. 
//Input :  5  
//Output : 5 # 4 # 3 # 2 # 1 # 


#include<stdio.h>
void PatternOne(int iNo)
{
    int iCnt=0;
    for(iCnt=iNo;iCnt>=1;iCnt--)
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
    PatternOne(iValue);
    return 0;

}