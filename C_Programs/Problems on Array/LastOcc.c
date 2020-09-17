 //Accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO. 
//Input :  N :   6 
  //NO:  66 
  //Elements : 85 66 3 66 93 88  
//Output : 3 
//Input :  N :   6 
  //NO:  93 
  //Elements : 85 66 3 66 93 88  
//Output : 4 
//Input :  N :   6 
  //NO:  12 
  //Elements : 85 11 3 15 11 111  
//Output : -1   





#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int LastOcc(int arr[],int ilength,int iNo);




int main() 
{  
     int iSize=0;
     int iCnt=0;
     int *P=NULL;
     int iRet=0;
int iValue=0;
   printf("enter number the elements\n");
   scanf("%d",&iSize);
   printf("Enter the Particular elements\n");
   scanf("%d",&iValue);
  
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
   iRet=LastOcc(P,iSize,iValue);
   if(iRet==-1)
   {
       printf("Size Fail\n");
   }
   else if(iRet==-2)
   {
       printf("No elements found\n");
   }
   
   else
   {
       printf("Last occource is %d",iRet);
   }
   

   free(P);
   
 return 0;
  } 
int LastOcc(int arr[],int ilength,int iNo )
{
    int iCnt=0;
    if((arr==NULL)||(ilength<=0))
{
    return -1;
}
for(iCnt=ilength-1;iCnt>=0;iCnt--)
{
    if(arr[iCnt]==iNo)
    {
        break;
    }

}
if(iCnt==ilength)
{
    return -2;
}
else
{
    return iCnt;
}
}
