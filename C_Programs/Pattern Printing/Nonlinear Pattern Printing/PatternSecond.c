
//Accept number of rows and number of columns from user and display below pattern. 
//Input :  iRow = 4  iCol = 3  
//Output :    1 2 3  
//            1 2 3
 //           1 2 3
 //           1 2 3   


 #include<stdio.h>
 
 void PatternSecond(int iRaw,int iCol)
 {
     int i=0;
     int j=0;
     for(i=1;i<=iRaw;i++)
     {
         for(j=1;j<=iCol;j++)
         {
             printf("%d\t",j);
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
        PatternSecond(iValue1,iValue2);
        return 0;
    }