//Write a program which accept string from user and copy the contents of that string into another string. (Implement strncpy() function) 
//Input :   “Marvellous Multi OS”    10 
//Output :   “Marvellous 
//Note : If third parameter is greater than the size of source string then copy whole string into destination. 
#include<stdio.h>
void Strpy(char *Src,char *Des,int iCnt)
{
    if((Src==NULL)||(Des==NULL))
    {
        return;

    }
    while((*Src!='\0')&&(iCnt!=0))
    {
        *Des=*Src;
        Src++;
        Des++;
        iCnt--;
    }
  *Des='\0';
}
int main()
{
    char arr[30]={'\0'};

    char brr[30]={'\0'};
    printf("enter the string\n");
    scanf("%[^'\n']s",arr);
    Strpy(arr,brr,10);
    printf("%s",brr);
    
    return 0;
}