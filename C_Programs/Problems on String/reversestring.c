
#include<stdio.h>


void Reverse(char Str[])
{
    char temp;
    char *Start=NULL;
    char  *End=NULL;


if(Str==NULL)
{
    return;
}
Start=Str;
End=Str;

while(*End!='\0')
{
    End++;

}
End--;
while(Start<End)
{
    temp=*Start;
    *Start=*End;
    *End=temp;

Start++;
End--;
}
}

int main()
{
    int iRet=0;
    char arr[20];

    printf("Enter the String\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);
   printf("%s",arr); 
    return 0;
}
