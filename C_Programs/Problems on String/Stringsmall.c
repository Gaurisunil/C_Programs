// Write a program which accept string from user and copy small characters of that string into another string. 
//Input :   “Marvellous multi OS” 
//Output :   “arvellous multi” 



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
        *Des=*Src;
       
         Des++;
        }
       Src++;
       
       

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