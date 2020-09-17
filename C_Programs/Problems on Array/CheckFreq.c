 //Accept N numbers from user and accept one another number as NO , return frequency of NO form it. 
//Input :  N :   6 
  //NO:  66 
 // Elements : 85 66 3 66 93 88  
//Output : 2 
//Input :  N :   6 
  //NO:  12 
  //Elements : 85 11 3 15 11 111  
//Output : 0 



#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int Frequency(int arr[],int ilength,int iNo);


int main()

{
int iRet=0;
int iSize=0;
int iValue=0;
int iCnt=0;

int *P=NULL;

printf("Enter the Number");
scanf("%d",&iSize);
printf("Enter the Value");
scanf("%d",&iValue);

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
iRet=Frequency(P,iSize,iValue);
printf("%d",iRet);
free(P);
return 0;
}

int Frequency(int arr[],int ilength,int iNo)
{
    int iSize=0;
    int iFreq=0;
    int iCnt=0;
    if((arr==NULL)||(ilength<0))
    {
        return 0;
    }
    for(iCnt=0;iCnt<ilength;iCnt++)
    {
        if((arr[iCnt])==iNo)
        {
            iFreq++;
        }
    }
    return iFreq;
}