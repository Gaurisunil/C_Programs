 //Accept N numbers from user and accept Range, Display all elements from that range 
//Input :  N :   6 
  //Start: 60     End :  90     Elements : 85 66 3 76 93 88  
//Output : 66 76 88 
//Input :  N :   6 
  //Start: 30     End :  50     Elements : 85 66 3 76 93 88  
//Output :



#include<stdio.h>
  #include<malloc.h>
  #include<stdlib.h>

 void Range(int arr[],int ilength,int iStart,int iEnd);


 int main() 
 {
     
     int iSize=0;
     int iCnt=0;
     int *P=NULL;
    int iValue1=0;
    int iValue2=0;
   printf("enter number the elements\n");
   scanf("%d",&iSize);
   printf("start num\n");
   scanf("%d",&iValue1);
   printf("end num\n");
   scanf("%d",&iValue2);
  
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
   Range(P,iSize,iValue1,iValue2);
   
   free(P);
   return 0; 
   }

   void Range(int arr[],int ilength,int iStart,int iEnd)
   {
       
       int iCnt=0;
       if((arr==NULL)||(ilength<0))
       {
           return ;
       }

       for(iCnt=0;iCnt<ilength;iCnt++)
       {
           if((iStart<=arr[iCnt])&&(arr[iCnt]<=iEnd))
           {
               printf("%d\t",arr[iCnt]);
           }
       }
   }
   