//Accept N numbers from user and display all such elements which are divisible by 5. 
//Input :  N :   6 
  //Elements : 85 66 3 80 93 88  
//Output : 85 80 



#include<stdio.h>
  #include<malloc.h>
  #include<stdlib.h>

 void DivisibleFive(int arr[],int ilength);


 int main() 
 {
     
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
   DivisibleFive(P,iSize);
   
   free(P);
   return 0; 
   }

   void DivisibleFive(int arr[],int ilength)
   {
       
       int iCnt=0;
       if((arr==NULL)||(ilength<0))
       {
           return ;
       }

       for(iCnt=0;iCnt<ilength;iCnt++)
       {
           if((arr[iCnt]%2)==0)
      {
          printf("%d\t",arr[iCnt]);
      }
       }
   }