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
                    int Value1=0;
                      int Value2=0;
                              Value1=10;
                              Value2=20;
                    
                                      iRet=Add(Value1,Value2);
                                          printf("Addison is %d",iRet);
                                            return 0;
      }