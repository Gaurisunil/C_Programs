 //Write a program which 2 strings from user and concat second string after first string. (Implement strcat() function). 
//Input :   “Marvellous Infosystems”    “Logic Building” 
//Output :  “Marvellous Infosystems Logic Building” 



 #include<stdio.h>
void Strpy(char *Src,char *Des)
{
    if((Src==NULL)||(Des==NULL))
    {
        return;

    }
    while(*Src!='\0')
    {
     Src++;   
     }
while(*Des!='\0')
{
    *Src=*Des;
    Src++;
    Des++;
}
  *Src='\0';
}
int main()
{
    char arr[30]="gauri";

    char brr[30]="chavan";
    //printf("enter the 1st string");
   // scanf("%[^'\n']s",arr);
    //printf("enter the 2nd string");
    //scanf("%[^'\n']s",brr);
    Strpy(arr,brr);
    printf("concat the string %s",arr);
    
    return 0;
}