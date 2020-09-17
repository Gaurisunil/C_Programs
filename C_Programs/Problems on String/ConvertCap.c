 //Write a program which accept string from user and copy that characters of that string into another string by converting all small characters into capital case. 
//Input :   “Marvellous Python 2” 
//Output :   “MARVELLOUS PYTHON 2” 



#include<stdio.h>
void Strpy(char *Src,char *Des)
{
    if((Src==NULL)||(Des==NULL))
    {
        return;

    }
    while(*Src!='\0')
    {
        if((*Src>='a')&&(*Src<='z'))
        {
            *Src=*Src-32;
            *Des=*Src;
            Des++;
        }
       Src++;
    }

}
int main()
{
    char arr[30]="Gauri Sunil";

    char brr[30];
   // printf("enter the string\n");
   // scanf("%[^'\n']s",arr);
    Strpy(arr,brr);
    printf("%s",brr);
    
    return 0;
}