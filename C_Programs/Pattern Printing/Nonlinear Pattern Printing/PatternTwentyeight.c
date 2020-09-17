 //Accept number of rows and number of columns from user and display below pattern. 
//Input :  iRow = 6  iCol = 6  
//Output : * * * * * *  
 //        *       * *
 //        *     *   *
 //        *   *     *
 //        * *       * 
 //        * * * * * *




#include<stdio.h>

void pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    for(i=1;i<=iRow;i++)
    {
   for(j=1;j<=iCol;j++)
   {
       if((i==1)||(i==iRow)||(j==1)||(j==iCol)||((i==1)&&(j==iCol))||((i==2)&&(j==iCol-1))||((i==3)&&(j==iCol-2))||((i==4)&&(j==iCol-3))||((i==5)&&(j==iCol-4))||((i==6)&&(j==iCol-5)))
       {
           printf("*\t");
       }
       else
       {
           printf("\t");
       }
       

      }   
   printf("\n"); 
    }
    
}


int main()
{
    int iValue1=0;
    int iValue2=0;
    printf("Enter the number of rows");
    scanf("%d",&iValue1);
    printf("Enter the number of colums");
    scanf("%d",&iValue2);
    pattern(iValue1,iValue2);
    return 0;

}  