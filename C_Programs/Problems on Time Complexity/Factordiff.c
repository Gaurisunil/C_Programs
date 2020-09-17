  //write a program which accept number from user and return difference betwwen  summation of all its factors and non factors.
      //ip:12     op:-34  (16-50)
      //ip:10     op:-29  (8-37)
  #include<stdio.h>
     int FactorDiff(int iNo)
     {
         int iCnt=0;
         int factor=0;
         int Nonfactor=0;
         
         for(iCnt=iNo/2;iCnt>=1;iCnt--)
         { 
              if((iNo%iCnt)==0)
            {
            factor=factor+iCnt;
           }
         }
             for(iCnt=1;iCnt<iNo;iCnt++)
             { 
                 if((iNo%iCnt)!=0)
                 {
                 Nonfactor=Nonfactor+iCnt;
                 }

             }
         return (factor-Nonfactor);
     }
        int main()
        {
             int iValue=0;
             int iRet=0;
             printf("enter the number");
             scanf("%d",&iValue);
             iRet=FactorDiff(iValue);
             printf("Difference is %d",iRet);
             return 0;

        }