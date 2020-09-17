///Write a program which accept three numbers and print its multiplation 
///ip:5 4 7   op:140
///ip:5 0 7   op:35
///ip: 5 0 0   op:5
 
 #include<stdio.h>
 int Multiplation(int iNo1,int iNo2,int iNo3)
 {
     int iMult=0;

   if((iNo1!=0)&&(iNo2!=0)&&(iNo3!=0))
   {
    iMult=iNo1*iNo2*iNo3;
    return iMult;
   }
  else if((iNo1==0)&&(iNo2!=0)&&(iNo3!=0))
   {
    iMult=(iNo2*iNo3);
    return iMult;
   }
   else if((iNo1==0)&&(iNo2==0)&&(iNo3!=0))
   {
    iMult=(iNo3);
    return iMult;
   }

 }

 
      int main()
      {
          int iValue1=0,iValue2=0,iValue3=0;
          int iRet=0;
          printf("enter the numbers\n");
          scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
          iRet=Multiplation(iValue1,iValue2,iValue3);
          printf("Multiplation is %d",iRet);
          return 0;
      }