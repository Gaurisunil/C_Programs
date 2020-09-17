///write program which accept one number from user and check whether that number is greater than 100 or not
    //ip:101      op:Greater
    //ip:39       op:Smaller

              #include<stdio.h>
              typedef int BOOL;
              #define True 1
              #define False 0
                 BOOL check(int iNo)
                 {
                     if(iNo>100)
                     {
                         return True;
                     }
                     else 
                     {
                        return False;
                     }
                     
                 } 
                 int main()
                 {
                     int iValue=0;
                     BOOL bRet=False;
                     printf("enter the Number");
                     scanf("%d",&iValue);
                     bRet=check(iValue);
                     if(bRet==True)
                     {
                         printf("Greater");
                     }
                     else 
                     {
                            printf("Smaller");
                     }
                     return 0;
                 }