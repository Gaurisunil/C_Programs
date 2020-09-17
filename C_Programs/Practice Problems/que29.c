/* Write a program which number from user and display below pattern.  
Input :   7846 
Output :   7 6 5 4 3 2 1     
		   8 7 6 5 4 3 2 1 
           4 3 2 1     
		   6 5 4 3 2 1   */

#include<stdio.h>



void Pattern(int iNo)
{
    int iCnt=0,temp=0,iDigit=0,iRev=0,i=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
while(iNo>0)
{
    iDigit=iNo%10;
    iRev=(iRev*10)+iDigit;
    iNo=iNo/10;
}
temp=iRev;
while(temp>0)
{
    iDigit=temp%10;
    for(i=iDigit;i>=1;i--)
    {
        printf("%d\t",i);
    }
    printf("\n");
    temp=temp/10;
}
}

int main()
{
	int iValue=159;
	
	Pattern(159);
	return 0;
}