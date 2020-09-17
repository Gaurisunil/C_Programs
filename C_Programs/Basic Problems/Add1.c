#include<stdio.h>
     int Add(int iNo1,int iNo2)
     {
              int iAns=0;
               iAns=iNo1+iNo2;
                     return iAns;
     }
            int main()
            {
                int iRet=0;
                    int iValue1=0;
                    int iValue2=0;
                    printf("enter the numbers\n");
                    scanf("%d %d",&iValue1,&iValue2);
                         iRet=Add(iValue1,iValue2);
                         printf("Addition is %d",iRet);
                               return 0;
                               

            }
            