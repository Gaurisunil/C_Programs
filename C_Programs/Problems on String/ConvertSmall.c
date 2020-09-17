
 //Write a program which accept string from user and copy that characters of that string into another string by converting all capital characters into small case. 
//Input :   “Marvellous Python 2” 
//Output :   “marvellous python 2” 
#include<stdio.h>
void Strpy(char *Src,char *Des)
{
    if((Src==NULL)||(Des==NULL))
    {
        return;

    }
    while(*Src!='\0')
    {
        if((*Src>='A')&&(*Src<='Z'))
        {
        *Src=*Src+32;
        }
         *Des=*Src;
        Src++;
        Des++;
       

        }
  *Des='\0';
}
int main()
{
    char arr[30]={'\0'};

    char brr[30]={'\0'};
    printf("enter the string\n");
    scanf("%[^'\n']s",arr);
    Strpy(arr,brr);
    printf("%s",brr);
    
    return 0;
}