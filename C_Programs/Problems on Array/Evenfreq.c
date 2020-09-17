//Accept N numbers from user and return frequency of even numbers. 
//Input :  N :   6 
  //Elements : 85 66 3 80 93 88  
//Output : 3   




#include<stdio.h>
  #include<malloc.h>
  #include<stdlib.h>

 int Difference(int arr[],int ilength);


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
   iRet=Difference(P,iSize);
   printf(" Result %d",iRet);
   free(P);
   return 0; 
   }

   int Difference(int arr[],int ilength)
   {
       int iFreq=0;
       
       int iCnt=0;
       if((arr==NULL)||(ilength<0))
       {
           return 0;
       }

       for(iCnt=0;iCnt<ilength;iCnt++)
       {
           if((arr[iCnt]%2)==0)
      {
        iFreq++;
      }
       }
       return iFreq;
   }
