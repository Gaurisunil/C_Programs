#include<stdio.h>
     void Pattern(int iRow,int iCol)
     {
         int i=0;
         int j=0;
         for(i=1;i<=iRow;i++)
         {
            if(i==1)
            {
                for(j=1;j<=iCol;j++)
                {
                    printf("%d\t",i);
                }
            
            printf("\n");
            }

           else  if(i==2)
            {
                for(j=1;j<=iCol;j++)
                {
                    printf("%d\t",i);
                }
                printf("\n");
            }



             else  if(i==3)
            {
                for(j=1;j<=iCol;j++)
                {
                    printf("%d\t",i);
                }
                printf("\n");
            }



             else  if(i==4)
            {
                for(j=1;j<=iCol;j++)
                {
                    printf("%d\t",i);
                }
                printf("\n");
            }
         }
     }
            

        int main()
        {
            int iValue1=0;
            int iValue2=0;
            printf("enter the rows");
            scanf("%d",&iValue1);
            printf("enter the colums");
            scanf("%d",&iValue2);
            Pattern(iValue1,iValue2);
            return 0;
            
        }