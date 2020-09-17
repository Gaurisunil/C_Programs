
 //Accept N numbers from user and accept one another number as NO , check whether NO is present or not. 
//Input :  N :   6 
  //NO:  66 
  //Elements : 85 66 3 66 93 88  
//Output : TRUE 
//Input :  N :   6 
  //NO:  12 
  //Elements : 85 11 3 15 11 111  
//Output : FALSE   
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Check(int arr[],int ilength,int iNo);
int main()
{
    int iSize=0;
    BOOL bRet=FALSE;
    int iCnt=0;
    int iValue=0;
    int *P=NULL;
    printf("enter the numbers");
    scanf("%d",&iSize);
    printf("Enter the Particular value\n");
    scanf("%d",&iValue);

    P=(int*)malloc(iSize*sizeof(int));
    if(P==NULL)
    {
        printf("Unable to allocate the memory");
    }
    printf("enter the Elements\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&P[iCnt]);
    }
    bRet=Check(P,iSize,iValue);
    if(bRet==TRUE)
    {
        printf("No is present");
    }
    else 
    {
        printf("No is absent");
    }
    free(P);
    return 0;
}





BOOL Check(int arr[],int ilength,int iNo)
{
    int iCnt=0;
    if((arr==NULL)||(ilength<=0))
    {
        return FALSE;
    }
    for(iCnt=0;iCnt<ilength;iCnt++)
    {
        if((arr[iCnt]==iNo))
        {
             
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}