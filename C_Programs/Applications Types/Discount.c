//Application for Discount//////
//Design application for hotel.Acoording to managemnet tem of hotel they are giving discount on total bill amount of customer.If bill amount is less than 500 then there is no discount,if bill amount 1500 and more than 500 they give 10% dicount.And if the bill amount is more than 1500 then they give 15% discount.Our Application should accept bill amount and depends on the discount policy we have to return the amount after applying discount.
///ip:1200       op:1080
    //ip:290     op:290
    //ip:3700     op:3145 

#include<stdio.h>
    float Calculate(int Amount)
    { 
        float discount=0.0;
        float AmountPaid=0.0;
        if(Amount<500)
        {
            printf("%d",Amount);
        }
        else if((Amount>=500)&&(Amount<1500))
        {
            discount=(Amount*10)/100;
            AmountPaid=Amount-discount;

        }
         else if(Amount>=1500)
        {
            discount=(Amount*15)/100;
            AmountPaid=Amount-discount;

        }
        return AmountPaid;
    }
       int main()
       {
           int iValue=0;
           float fRet=0.0;
           printf("enter the amount");
           scanf("%d",&iValue);
           fRet=Calculate(iValue);
           printf("%f",fRet);
           return 0;

       }
          