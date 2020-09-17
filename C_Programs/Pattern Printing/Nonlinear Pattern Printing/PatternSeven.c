//Accept number of rows and number of columns from user and display below pattern. 
//Input :  iRow = 4  iCol = 4  
//Output : A B C D  
//       a b c d
//       A B C D  
//       a b c d 





 #include<stdio.h>
      void Pattern(int iRow,int iCol)
      {
          int i=0;
          int j=0;
          char ch='\0';

          for(i=1;i<=iRow;i++)
          {
              if((i%2)==0)
              {
              for(j=1,ch='a';j<=iCol;j++)
              {
                  printf("%c\t",ch);
                  ch++;
              }
              printf("\n");
          
          }
               else
              {
              for(j=1,ch='A';j<=iCol;j++)
              {
                  printf("%c\t",ch);
                  ch++;
              }
              printf("\n");
              }
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