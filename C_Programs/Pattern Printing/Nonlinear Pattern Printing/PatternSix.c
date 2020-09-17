//Accept number of rows and number of columns from user and display below pattern. 
//Input :  iRow = 4  iCol = 4  
//Output : A B C D   
 //       A B C D  
 //       A B C D 
 //       A B C D
 

 #include<stdio.h>
      int main()
      {
          int i=0;
          int j=0;
       for(i=10;i>=1;i--)
	   {
		   for(j=1;j<=10;j++)
		   {
			   if(i<=j)
			   {
				   printf("* ");
			   }
			   else
			   {
				   printf(" ");
			   }
			   
		   }
		   printf("\n");
	   }
      return 0;
	  }