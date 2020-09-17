//Accept sing from user and reverse the contents of that string by toggling the case. 
//Input :   “aCBdef”
//Output :   “FEDcbA” 

#include<stdio.h>

void  StrPallindrome(char *str)
{
	char temp;
    char *start=NULL;
    char *end=NULL;

	
	if(str==NULL)
	{
		return ;
	}
	start=str;
    end=str;

	while(*end !='\0')
	{
		end++;
	}
	end--;
	
	while(start<end)
	{
		
		if(*start != *end)
		{
			
			if((*start>='A')&&(*start<='Z'))
			{
				*start=*start+32;
			}
            else
            {
                
                  *start=*start-32;  
                
            }
            
			if((*end>='A')&&(*end<='Z'))
			{
				*end=*end+32;
			}
            else
            {
                *end=*end-32;
                
            }
            
		}
		temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}



int main()
{

	char arr[20]="Marvellous";
	
	StrPallindrome(arr);
	
	printf("%s",arr);
	return 0;
}