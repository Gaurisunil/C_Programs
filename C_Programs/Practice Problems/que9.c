#include<stdio.h>

void Strcpy(char *src,char *dest)
{
    int iCnt=0;
    while(*src!='\0')
    {
        if((*src==' ')&&(*src!='\0'))
        {
        *dest=*src;
         src++;
         dest++;
        }    
    else
    {
        *dest=*src;
        src++;
        dest++;
        iCnt=0;
        
    }
    }
    *dest!='\0';

}

int main()
{
    char arr[30]="Marvellous mulit    Os";
    char brr[30];
    Strcpy(arr,brr);

    printf("%s",brr);
    return 0;
}