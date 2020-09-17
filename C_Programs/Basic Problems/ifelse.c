#include<stdio.h>
      void Ticket(int iAge)
      {
             if((iAge<0)||(iAge>100))
             {
                  printf("Invalid ");
                   return ;
             }
             else if((iAge>=0)&&(iAge<5))
             {
                  printf("entery free");

             }
      else if((iAge>=5)&&(iAge<15))
      {
         printf("Ticket amount 200 ");
      }
          else if((iAge>=15)&&(iAge<=50))
          {
                  printf("Ticket amount 1000 ");
          }
               else if((iAge>50))
               {
                 printf("Ticket amount 300 ");  
               }
      }
          int main()
          {
                   int Value=0;
                   printf("enter the age");
                   scanf("%d",&Value);
                   Ticket(Value);
                    return 0;
          }

