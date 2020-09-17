
7//Accept number of rows and number of columns from user and display below pattern. 
//Input :  iRow = 4  iCol = 4  
//Output :    2 4 6 8 10  
//            1 3 5 7 9   
//            2 4 6 8 10 
//            1 3 5 7 9

#include<stdio.h>
void pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    int iMult=0;
    int iMult1=0;
    int iMult2=0;
    for(i=1;i<=iRow;i++)
    {
        if((i%2)==0)
        {
        for(j=1;j<=iCol;j++)
        {   
             iMult=j*2;
            printf("%d\t",iMult);
        }
    }
    else
    {
        for(j=1;j<=iCol;j++)
        {
            iMult1=j*2;
            iMult2=iMult1-1;
            printf("%d\t",iMult2);
            }
    }
            printf("\n");
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("enter the Number of rows");
    scanf("%d",&iValue1);
    printf("enter the Number of Colums");
    scanf("%d",&iValue2);
    pattern(iValue1,iValue2);
    return 0;
}