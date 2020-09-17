//Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only) 
//Input :  23 30  Output :  108  
// Input :  10 18 Output :  70 


//Input :  90 18 Output :  0



#include<stdio.h>
int RangeSumDisplay(int iStart,int iEnd)
{
    int iCnt=0;
    int iSum=0;
     
      if(iStart>iEnd)
      {
          printf("Invalid Range\n");
      }
      
     
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
       if((iCnt%2)==0)
       {
        iSum=iSum+iCnt;
        }
    }
    return iSum;
     
}
    int main()
    {
        int iValue1=0;
        int iValue2=0;
        int iRet=0;
        printf("enter the Starting Number ");
        scanf("%d",&iValue1);
        printf("enter the Ending Number");
        scanf("%d",&iValue2);
        iRet=RangeSumDisplay(iValue1,iValue2);
          printf("Summation is %d\n",iRet);
        return 0;
    }