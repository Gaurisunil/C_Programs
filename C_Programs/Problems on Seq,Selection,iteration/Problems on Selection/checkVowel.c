//Accept on character from user and check wheter that character is vowel (a,e,i,o,u)or not
//ip:e   op:TRUE
//ip:k    op:FALSE
  #include<stdio.h>
  typedef int BOOL;
          #define TRUE 1
          #define FALSE 0
        
               
               BOOL checkVowel(char ch)
               {
                   if((ch== 'a')||(ch== 'e')||(ch== 'i')||(ch== 'o')||(ch== 'u'))
                   {
                       return TRUE;
                   }
                   else
                   {
                       return FALSE;
                   }

               }
                   int main()
                   {
                       char cValue='\0';
                       BOOL bRet=FALSE;
                            printf("enter the character\n");
                            scanf("%c",&cValue);
                            bRet=checkVowel(cValue);
                            if(bRet==TRUE)
                            {
                                printf("Its vowel");
                            }
                                 else
                                 {
                                     printf("Its not vowel");
                                 }
                                    return 0;
                   }