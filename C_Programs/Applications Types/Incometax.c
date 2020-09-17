////////application for income Tax Departmaent/////////
 //Design applicatin for income tax department to calclute tax amount According to the income tax department there is no income tax for the income less than 5 lakhs.If income is in between 5 to 10 lakhs  then there will be 10% tax.if income is in between 10 to 20 lakhs then there 10 to 20 lakhs then there will 20% tax.And for more then 20 lakhs there will be 30L% tax.we have to accept gross income from user and return the tax amount
 ///ip:600000    op:10000
 ///ip:4500      op:0
 ///ip:1200000    op:900000
 
#include<stdio.h>
    float Income(float Amount)
    {      float Tax=0.0;
              if(Amount<500000)
              {
                  printf("%f",Amount);
              }
                if((Amount>=500000)&&(Amount<1000000))
                {
                    Tax=(Amount*0.1);
                    return Tax;
                    
                }
                   else if((Amount>=1000000)&&(Amount<2000000))
                {
                    Tax=(Amount*0.2);
                      return Tax;
                }
                else if(Amount>=2000000)
                {
                    Tax=Amount*0.3;
                    return Tax;
                    
                }
            
    }
       int main()
       {
           float fValue=0.0;
           float fRet=0.0;
                 printf("Enter the value");
                    scanf("%d",&fValue);
                    fRet=Income(fValue);
                    printf("%f",fRet);
                    return 0;
       }