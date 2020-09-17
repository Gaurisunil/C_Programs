// Write a program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be accepted from user. (Implement strncat() function). Note : If third parameter is greater than the size of second string then concat whole string after first string. 
//Input :   “Marvellous Infosystems”    “Logic Building”    5 
//Output :  “Marvellous Infosystems Logic” 


#include<stdio.h>
void Str(char *src,char *des,int iCnt)
{
    if((src==NULL)||(des==NULL))
    {
        return;
    }
    while(*src!='\0')
    {
        src++;

    }
    while((*des!='\0')&&(iCnt!=0))
    {
        *src=*des;
        src++;
        des++;
        iCnt--;
    }
    *src='\0';
}
int main()
{
    int iValue=0;
    char arr[50]="Marvellous Infosystems";
    char brr[50]="logic building";
    printf("enter the digit\n");
     scanf("%d",&iValue);

    Str(arr,brr,iValue);
    printf("%s",arr);
    return 0;
    
}
