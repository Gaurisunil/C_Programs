//write a program which accept one number from user and print that number of even number on screen.
    //ip: 7
    //op:2 4 6 8 10 12  14

    #include<stdio.h>
    void PrintEven(int iNo)
    {
              int i=0;
              int iAns=0;
                
              for(i=1;i<=iNo;i++)
              {
                iAns=(i*2);
                printf("%d\n",iAns);
              }
        
    }
           int main()
           {
                    int iValue=0;
                    printf("enter the numbers");
                    scanf("%d",&iValue);
                    PrintEven(iValue);
                    return 0;
                    
           }