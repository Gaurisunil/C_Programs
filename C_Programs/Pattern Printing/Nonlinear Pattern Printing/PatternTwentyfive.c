//Accept number of rows and number of columns from user and display below pattern. //wrong
//Input :  iRow = 4  iCol =  4  
//Output : 1 2 3 4   
//           2 3 4    
//             3 4     
//               4 


#include<stdio.h>

void pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
   for(i=1;i<=iRow;i++)
   { 
   for(j=1;j<=iCol;j++)
   {
       if((j==1)&&(i==1))
       {
    printf("%d\t",j);
       }
       else if
       {
           ("\t");
       }
   }
       else if((j==2)&&(i<3))
       {
         printf("%d\t",j);  
       }
       else if((j==3)&&(i<4))
    {
        printf("%d\t",j);
    }
     else 
    {
        printf("%d\t",j);
    }
    
   }
   
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