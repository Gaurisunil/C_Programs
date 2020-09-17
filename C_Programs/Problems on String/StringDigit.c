 //Write a program which accept string from user and display only digits from that string. 
//Input :   “marve89llous121” 
//Output :   89121 

//Input :   “Demo” 
//Output :  




#include<stdio.h>
    void Display(char Str[])
    {
    while(*Str!='\0')
    {
        if((*Str>=48)&&(*Str<=57))
   {
    printf("%c",*Str);
   }
     Str++;
    }
    }



    
    int main()
{
    
    char arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);

    Display(arr);
    
    return 0;
}