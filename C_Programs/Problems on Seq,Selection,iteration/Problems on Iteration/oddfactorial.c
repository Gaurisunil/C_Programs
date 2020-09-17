///Write a program to find odd factorial of given number.  
//Input :  5       Output :  15   (5 * 3 * 1)
//Input :  -5     Output :  15   (5 * 3 * 1)
 //Input :  10        Output :  945  (9 * 7 * 5 * 3 * 1)


 #include<stdio.h>
       int OddFactorial(int iNo)
       {   int iAns=0;
          iAns=1;
           int iCnt=0;
           if(iNo<0)
           {
               iNo=-iNo;
           }
           for(iCnt=iNo;iCnt>=1;iCnt--)
           {
            
               
                   if((iCnt%2)!=0)
                   {
                       iAns=iCnt*iAns;
                       
                   }
               
           }
           return iAns;
       }
            int main()
            {
                   int iValue=0;
                   int iRet=0;
                   printf("enter the number");
                   scanf("%d",&iValue);
                   iRet=OddFactorial(iValue);
                   printf("%d",iRet);
                   return 0;


            }