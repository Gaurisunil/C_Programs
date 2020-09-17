#include<stdio.h>

void  StrPallindrome(char *str)
{
	char temp;
    char *start=NULL;
    char *end=NULL;
     start=str;
   end=str;
	
	if(str==NULL)
	{
		return ;
	}
	
    while(*str!='\0')
    {
        if(*str==' ')
        {
            while((*str==' ')&&(*str!='\0'))
            {
                str++;
            }
        }
             else if(*str!=' ')
        {
             while((*str!=' ')&&(*str!='\0'))
            {
                
               while((*end!=' ')&&(*end!='\0'))
               {
                end++;
            }
        end--;
        while(start<end)
        {
		temp=*start;
        *start=*end;
        *end=temp;
        start++;
      
        end--;
       
    }
  str++;  
}
 
}
}
}


int main()
{

	char arr[50]="Gauri Chavan";
	
	StrPallindrome(arr);
	
	printf("%s",arr);
	return 0;
}