//accept  two number from user and display first number in second number of time
//ip:12 5
//op: 12 12  12 12 12

///ip:-2 3
///op:-2 -2 -2

///ip:21   -3
///op:21 21 21

   #include<stdio.h>
        void display(int iNo,int ifrequency)
        {
            int i=0;
            if(ifrequency<0)
            {
                ifrequency=-ifrequency;
            }
            for(i=1;i<=ifrequency;i++)
            {
                printf("%d\n",iNo);

            }
        }
             int main()
             {
                     int iValue=0;
                     int iCount=0;
                     printf("enter the numbers");
                     scanf("%d",&iValue);
                      printf("enter the counts");
                     scanf("%d",&iCount);
                     display(iValue,iCount);
                        return 0;

             }