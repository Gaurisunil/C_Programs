 //Accept number of rows and number of columns from user and display below pattern. 
//Input :  iRow = 3  iCol = 5  
//Output :      5 4 3 2 1   
//              5 4 3 2 1  
//              5 4 3 2 1

 #include<stdio.h>
 
 void PatternThird(int iRaw,int iCol)
 {
     int i=0;
     int j=0;
     for(i=1;i<=iRaw;i++)
     {
         for(j=iCol;j>=1;j--)
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
        PatternThird(iValue1,iValue2);
        return 0;
    }
 