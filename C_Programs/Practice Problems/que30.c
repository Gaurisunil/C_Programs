/*Write a program which number from user and display below pattern.  
Input :   7846 
Output :  6 # # # # # #   
		  4 # # # #   
		  8 # # # # # # # # 
          7 # # # # # # #  */

#include<stdio.h>




void Pattern(int iNo)
{
    int i=0,iDigit=0;
    while(iNo>0)
    {
        iDigit=iNo%10;
        printf("%d",iDigit);
        for(i=1;i<=iDigit;i++)
        {
            printf("$\t");

        }
        printf("\n");
        iNo=iNo/10;
    }

}

int main()
{
	int iValue=159;
	
	Pattern(159);
	return 0;
}