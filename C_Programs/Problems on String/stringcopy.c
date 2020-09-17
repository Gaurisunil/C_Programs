//Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function) 
//Input :   “Marvellous Multi OS” 
//Output :   “Marvellous Multi OS” 


#include<stdio.h>
#include<string.h>
void Strpy(char *Src,char *Des)
{
    if((Src==NULL)||(Des==NULL))
    {
        return;

    }
    while(*Src!='\0')
    {
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