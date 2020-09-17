//write a program which accept name from user and print that name
#include<stdio.h>
    int main()
    {
        char Name[38];
        printf("Enter your name");
        scanf("%[^'\n']s", Name);
        printf("Your name is %s",Name);
        return 0;

    }

    