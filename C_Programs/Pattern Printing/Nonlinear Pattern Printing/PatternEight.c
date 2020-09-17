 //Accept number of rows and number of columns from user and display below pattern. 
//Input :  iRow = 3  iCol = 5  
//Output : A A A A A   
  //      B B B B B  
  //      C C C C C 



        #include<stdio.h>
      void Pattern(int iRow,int iCol)
      {
          int i=0;
          int j=0;
          char ch='\0';

          for(i=1;i<=iRow;i++)
          {
              if(i==1)
              {
              for(j=1,ch='A';j<=iCol;j++)
              {
                  printf("%c\t",ch);
                
              }
              printf("\n");
          }




          if(i==2)
              {
              for(j=1,ch='B';j<=iCol;j++)
              {
                  printf("%c\t",ch);
                
              }
              printf("\n");
          }
           if(i==3)
              {
              for(j=1,ch='C';j<=iCol;j++)
              {
                  printf("%c\t",ch);
                
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