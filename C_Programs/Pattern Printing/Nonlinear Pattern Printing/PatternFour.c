// Accept number of rows and number of columns from user and display below pattern. 
//Input :  iRow = 3  iCol = 4  
//Output :  * # * # 
//          * # * #  
//          * # * # 


#include<stdio.h>
 
 void PatternFour(int iRaw,int iCol)
 {
     int i=0;
     int j=0;
     for(i=1;i<=iRaw;i++)
     {
         for(j=1;j<=iCol;j++)
         {
             if((j%2)==0)
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
        printf("Enter the Rows");
        scanf("%d",&iValue1);
        printf("Enter the Colums");
        scanf("%d",&iValue2);
        PatternFour(iValue1,iValue2);
        return 0;
    }
 