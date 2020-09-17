//write a program which accept two numbers and check whether numbers are equal or not
  ///ip:10 10      op:equal    
    ///ip:10 12     op:   Not equal


    #include<stdio.h>
        #define True 1
        #define False 0
            typedef int BOOL;

                 BOOL  equal(int iNo1,int iNo2)
                 {
                     if(iNo1==iNo2)
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
                       int iValue1=0,iValue2=0;
                       BOOL bRet=0;
                       printf("enter the numbers");
                       scanf("%d %d",&iValue1,&iValue2);
                       bRet=equal(iValue1,iValue2);
                       if(bRet==True)
                       {
                           printf("its equal");
                       }
                        else 
                        {
                             printf("its not equal");
                        }
                        return 0;

                   }