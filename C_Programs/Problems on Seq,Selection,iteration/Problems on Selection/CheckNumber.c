//write a program which accept number from user and if number is less than 50 then print small , if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large.
//Input : 75  Output : Medium 

#include<stdio.h>
    void CheckNnumber(int iNo)
    {
        if(iNo<0)
        {
            iNo=-iNo;
        }
        else if(iNo<50)
        {
            printf("Smaller");
        }
        else if((iNo>=50)&&(iNo<100))
        {
            printf("Medium");
        }
        else if(iNo>100)
        {
            printf("Greater");
        }
    }
       int main()
       {
           int iValue=0;
           printf("Enter the number");
           scanf("%d",&iValue);
           CheckNnumber(iValue);
           return 0;
       }