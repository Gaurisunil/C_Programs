//Accept number of rows and number of columns from user and display below pattern. 
//Input :  iRow = 4  iCol =  4  
//Output :   1 2 3 4   
//           2 3 4 5    
//           3 4 5 6  
//           4 5 6 7 

#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    for(i=1;i<=iRow;i++)
{
    if(i==1)
    {  int iCnt=0;
         iCnt=1;
        for(j=1;j<=iCol;j++)
        {
         printf("%d\t",iCnt);
            iCnt++;
        }
    }


     else if(i==2)
    {  
        int iCnt=0;
         iCnt=2;
        for(j=1;j<=iCol;j++)
        {
         printf("%d\t",iCnt);
            iCnt++;
        }
    }



   else   if(i==3)
    {  int iCnt=0;
         iCnt=3;
        for(j=1;j<=iCol;j++)
        {
         printf("%d\t",iCnt);
            iCnt++;
        }
    }

    else   if(i==4)
    {  int iCnt=0;
         iCnt=4;
        for(j=1;j<=iCol;j++)
        {
         printf("%d\t",iCnt);
            iCnt++;
        }
    }
   
   printf("\n");
   
}
} 
int main()

{
    int iValue1=0;
    int iValue2=0;
    printf("enter the rows");
    scanf("%d",&iValue1);
    printf("enter the columns");
    scanf("%d",&iValue2);
    pattern(iValue1,iValue2);
    return 0;
}