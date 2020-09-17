 //Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255. 

#include<stdio.h>


void ASCI()
{
    int i=0;
    for(i=33;i<256;i++)
    {
        printf("%d\t-> %c\t",i,i);
		
		printf("\n");
        
	}
}
int main()
{
    ASCI();
    return 0;
}