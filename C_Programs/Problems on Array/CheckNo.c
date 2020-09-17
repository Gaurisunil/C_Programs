 //Accept N numbers from user check whether that numbers contains 11 in it or not. 
//Input :  N :   6 
//Elements : 85 66 11 80 93 88  
//Output : 11 is present 
//Input :  N :   6 
//Elements : 85 66 3 80 93 88  
//Output : 11 is absent 




#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Check(int arr[],int ilength);
int main()
{
    int iSize=0;
    BOOL bRet=FALSE;
    int iCnt=0;
    int *P=NULL;
    printf("enter the numbers");
    scanf("%d",&iSize);

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
    bRet=Check(P,iSize);
    if(bRet==TRUE)
    {
        printf("11 is present");
    }
    else 
    {
        printf("11 is absent");
    }
    free(P);
    return 0;
}





BOOL Check(int arr[],int ilength)
{
    int iCnt=0;
    if((arr==NULL)||(ilength<=0))
    {
        return FALSE;
    }
    for(iCnt=0;iCnt<ilength;iCnt++)
    {
        if((arr[iCnt])==11)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
}