


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

 void DigitSum(int arr[],int ilength);


 int main() 
 {
     
     int iSize=0;
     int iCnt=0;
     int *P=NULL;
     
   printf("enter number the elements\n");
   scanf("%d",&iSize);
  
  P=(int*)malloc(iSize*sizeof(int));
  if(P==NULL)
  {
      printf("Unable to allocte the memory");
      return -1;
  }
  printf("Enter the Elements\n");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
      scanf("%d",&P[iCnt]);
  }
  DigitSum(P,iSize);
   
   free(P);
   return 0; 
   }
void DigitSum(int arr[],int ilength)
   {
       
       int i=0;
     int iCnt=0;
     int iNo=0;
     int iDigit=0;
     int iSum=0;
       if((arr==NULL)||(ilength<0))
       {
           return ;
       }
      


for(i=0;i<ilength;i++)
    { 
        iSum=0;
 iNo=arr[i];
while(iNo!=0)
{
    iDigit=iNo%10;
    iSum=iSum+iDigit;
    iNo=iNo/10;
}

printf( "%d\t",iSum);
    }
}
   