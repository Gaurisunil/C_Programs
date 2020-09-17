//Application for Tourbill////
///Tourist company provides cars on rent.Depends on the running of car they apply rent.If running is less than 100 kilometer then they charge 25 rupees per kilometer.If running is less than 100 kilometeres thenthey charge 25 rupees per kilometere.And if running is more than 100 kilometers  then they apply 15 rupees per kilometer after 100 kilometers.we have to accept number of kilometer from user and return the estimated rent...
///ip:73    op:1825
//ip:132    op:1980
//ip:189    op:2835

#include<stdio.h>
    int Tourbill(int iKillo)
    { 
        int iAns=0;
        if(iKillo<100)
        { 
            iAns=(iKillo*25);
        

        }
        if(iKillo>=100)
        { 
            iAns=(iKillo*15);
            

        }
        return iAns;

    }
        int main()
        {
            int iValue=0;
            int iRet=0;
            printf("Enter the Distance");
            scanf("%d",&iValue);
            iRet=Tourbill(iValue);
            printf("%d",iRet);
            return 0;
        }