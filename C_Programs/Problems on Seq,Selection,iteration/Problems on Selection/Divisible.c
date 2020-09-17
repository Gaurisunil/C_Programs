//Accept one number check divisible  5
   #include<stdio.h>
       typedef int BOOL;
       #define TRUE 1
       #define FALSE 0
          int Check(int iNo)
          {
              if((iNo%5)==0)
              {
                     return TRUE;
              }
              else
              {
                     return FALSE;
              }

          }
             int main()
             {
                     int Value=0;
                      BOOL bRet=FALSE;
                      printf("Enter Numbers");
                      scanf("%d",&Value);
                      bRet=Check(Value);
                       if(bRet==TRUE)
                       {
                            printf("No is divisible by 5");

                       }
                          else 
                          {
                              printf("No is not divisible by 5");
                          }
                          return 0;
             }
