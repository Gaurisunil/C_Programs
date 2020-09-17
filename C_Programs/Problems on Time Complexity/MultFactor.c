//Write a program which accept number from user and display multiplication of factor/////

///ip:12  
///op:144    (1*2*3*4*6)

//ip:13
//op:1   (1)

//ip:10
//op:10     (1*2*5)
 
  #include<stdio.h>
       int MultFactor(int iNo)
       {  
            int iMult=0;
            iMult=1;
            int iCnt=0;
           if(iNo<0)
           {
               iNo=-iNo;
           }
           for(iCnt=iNo/2;iCnt>=1;iCnt--)
           {  
               if((iNo%iCnt)==0)
               {
               iMult=iMult*iCnt;
               }
           }
           return (iMult);
       }
          int main()
          {
               int iValue=0;
              int  iRet=0;
               printf("Enter the Numbers");
               scanf("%d",&iValue);
               iRet=MultFactor(iValue);
               printf("Multiplication of factor is %d",iRet);
               return 0;
          }