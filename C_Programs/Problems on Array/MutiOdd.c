//Accept N numbers from user and return product of all odd elements. 
//Input :  N :   6     Elements : 15 66 3 70 10 88  
//Output : 45 
//Input :  N :   6     Elements : 44 66 72 70 10 88  
//Output : 0 


#include<stdio.h>
  #include<malloc.h>
  #include<stdlib.h>

 int MutiOdd(int arr[],int ilength);


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
   iRet=MutiOdd(P,iSize);
   printf("Product of odd elements is %d",iRet);
   free(P);
   return 0; 
   }

   int MutiOdd(int arr[],int ilength)
   {
       
       int iCnt=0;
       int iMuti=1;
       if((arr==NULL)||(ilength<0))
       {
           return 0;
       }

       for(iCnt=0;iCnt<ilength;iCnt++)
       {
           if((arr[iCnt]%2)!=0)
      {
          iMuti=iMuti*arr[iCnt];
      }
      else
      {
          return 0;
      }
      

       }
       return iMuti;
   }