//Accept number of rows and number of columns from user and display below pattern. 
//Input :  iRow = 4  iCol = 4  
//Output :   * # # #  
//           * * # #  
//           * * * #  
//           * * * * 

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;



    for(i=1;i<=iRow;i++)
    {
   for(j=1;j<=iCol;j++)
        { 
         if(i<j)
            {
          printf("#\t");
        }
    else
    {
    printf("*\t");
        }
    }
    
    printf("\n");
    }
}


int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("enter the number of rows");
    scanf("%d",&iValue1);
    printf("enter the number of colums");
    scanf("%d",&iValue2);
    Pattern(iValue1,iValue2);
    return 0;
}