//Accept N numbers from user and return the largest number. 
//Input :  N :   6 
  //Elements : 85 66 3 66 93 88  
//Output : 93 


#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Maximum(int arr[],int ilength);


 int main() 
 {
     
     int iSize=0;
     int iCnt=0;
     int *P=NULL;
       int iRet=0;
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
   iRet=Maximum(P,iSize);
   printf("Maximum no is %d",iRet);
   free(P);
   return 0; 
   }


   int Maximum(int arr[],int ilength)
   {
       
       int iCnt=0;
     int  iMax=0;
       if((arr==NULL)||(ilength<0))
       {
           return 0;
       }
      iMax = arr[0];

       for(iCnt=0;iCnt<ilength;iCnt++)
       {
           if(arr[iCnt]>iMax)
           {
               iMax=arr[iCnt];
           }
       }
       return iMax;
   
   }