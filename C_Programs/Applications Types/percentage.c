//write a program which accept total marks and obtained from user and calcluate percentage.
  ////ip: 1000    745
  ///op:74.5%


  #include<stdio.h>
      float percentage(float iNo1,float iNo2)
      {
          float fAns=0.0;
          float percentage=0.0;
          if(iNo2==0)
          {
                return iNo2;
          }
          fAns=(iNo1/iNo2);
          percentage=(fAns*100);
          return (percentage);
      }
          int main()
          {
              float fValue1=0.0;
              float fValue2=0.0;
              float fRet=0.0;
            printf("enter the marks");
            scanf("%f",&fValue1);
            printf("enter the obtain marks");
            scanf("%f",&fValue2);
                 fRet=percentage(fValue1,fValue2);
                 printf("percentage is %f",fRet);
                 return 0;       
          }