 //Accept N numbers from user and return frequency of 11 form it. 
//Input :  N :   6 
//Elements : 85 66 3 15 93 88  
//Output : 0 
//Input :  N :   6 
//Elements : 85 11 3 15 11 111  
//Output : 2 



#include<stdio.h>
  #include<malloc.h>
  #include<stdlib.h>

 int Frequency(int arr[],int ilength);


 int main() 
 {
     int iRet=0;
     int iSize=0;
     int iCnt=0;
     int *P=NULL;

   printf("enter number the elements");
   scanf("%d",&iSize);
  
  P=(int*)malloc(iSize*sizeof(int));
  if(P==NULL)
  {
      printf("Unable to allocte the memory");
      return -1;
  }
  printf("Enter the Elements");
  for(iCnt=0;iCnt<iSize;iCnt++)
  {
      scanf("%d",&P[iCnt]);
  }
   iRet=Frequency(P,iSize);
   printf(" Result %d",iRet);
   free(P);
   return 0; 
   }

   int Frequency(int arr[],int ilength)
   {
       int iFreq=0;
       
       int iCnt=0;
       if((arr==NULL)||(ilength<0))
       {
           return 0;
       }

       for(iCnt=0;iCnt<ilength;iCnt++)
       {
           if((arr[iCnt])==11)
      {
        iFreq++;
      }
       }
       return iFreq;
   }
