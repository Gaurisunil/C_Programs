/*Write a program which number from user and display below pattern.  
Input :   7846 
Output :   6 4 8 7   
		   6 4 8 7
           6 4 8 7   
	       6 4 8 7 */
void Pattern(int iNo)
{
	int iDigit=0,iCnt=0,i=0,j=0,iRev=0,iNo1=iNo;
	
	while(iNo1 > 0)
	{
		iDigit=iNo1%10;
		iNo1=iNo1/10;
		iCnt++;
	}
	
	
	
	
	 for(i=1;i<=iCnt;i++)
	 {
		 iNo1=iNo;
		 while(iNo1>0)
		 {
			 iDigit=iNo1%10;
			 printf("%d",iDigit);
			 printf("\t");
			 iNo1=iNo1/10;
		 }
		 printf("\n");
	 }
	
	
	
	
}
int main()
{
	int iValue=7846;
	
	Pattern(7846);
	return 0;
}