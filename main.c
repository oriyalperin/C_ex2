#include "myBank.h"
#include <stdio.h>

int main()
{
    char c=0;
    do{
    printf("\n");
    printf("Please choose a transaction type:\n");
    printf(" O-Open Account\n");
    printf(" B-Balance Inquiry\n");
    printf(" D-Deposit\n");
    printf(" W-Withdrawal\n");
    printf(" C-Close Account\n");
    printf(" I-Interest\n");
    printf(" P-Print\n");
    printf(" E-Exit\n");
    scanf(" %c",&c);
    float amount=0;
    int account_number=0;
    int interest_rate=0;
    switch(c)
    {
     case 'A'+14:
    if(isFull()==0)
    {
        printf("Please enter amount for deposit: "); 
        if(scanf("%f", &amount)==1)
        { 
            if(amount>0)
            openAccount(amount);
            else
            {
                printf("Invalid Amount\n");
            }
         
         }
         else
        {
            printf ("Failed to read the amount\n");
        }
    } 
     else
         {
              printf("Sorry, there is no room for more accounts\n");
         }
     
     break;

     case 'A'+1:
     printf("Please enter account number: ");
     if(scanf("%d", &account_number)==1)
     {
         if(account_number>=901 && account_number<=950)
         {
            if(isOpen(account_number)==1)
                checkBalance(account_number);
            else
                printf("This account is closed\n");
         }
        else
        {
              printf("Invalid account number\n");
        }
        
     }

     else
     {
         printf("Failed to read the account number\n");
     }
     
     break;

     case 'A'+3:
     printf("Please enter account number: ");
     if(scanf("%d", &account_number)==1)
     {
        if(account_number>=901 && account_number<=950)
         { 
            if(isOpen(account_number)==1)
            {
                printf("Please enter the amount to deposit: ");
                if(scanf("%f",&amount)==1)
                 {   
                     if(amount>=0)
                    depositing(account_number,amount);
                    else
                    {
                        printf("Cannot deposit a negative amount\n");
                    }
                 }
                else
                {
                     printf ("Failed to read the amount\n");
                }
            }
        else
                printf("This account is closed\n");
         }
        else
        {
              printf("Invalid account number\n");
        }   
     }
     else
     {
        printf("Failed to read the account number\n");
     }
    
     break;

     case 'A'+22:
     printf("Please enter account number: ");
      if(scanf("%d", &account_number)==1)
     {
         if(account_number>=901 && account_number<=950)
         { 
            if(isOpen(account_number)==1)
            {
                printf("Please enter the amount to withdraw: ");
                if(scanf("%f",&amount)==1)
                    getCach(account_number,amount);
                else
                {
                    printf ("Failed to read the amount\n");
                }
            }
        else
                printf("This account is closed\n");
        }
        else
        {
              printf("Invalid account number\n");
        }
        
     }
     else
     {
        printf("Failed to read the account number\n");
     }
    
     break;

     case 'A'+2:
     printf("Please enter account number: ");
     if(scanf("%d", &account_number)==1)
     {
         if(account_number>=901 && account_number<=950)
         { 
            if(isOpen(account_number)==1)
            {
              closeAccount(account_number);
            }
            else
                printf("This account is already closed\n");
         }
        else
        {
              printf("Invalid account number\n");
        }
     }
     else
     {
        printf("Failed to read the account number\n");
     }
     
     break;

     case 'A'+8:
     printf("Please enter interest rate: ");
     
     if(scanf("%d", &interest_rate)==1)
     {  
        if(interest_rate<=99 && interest_rate>0)
        {
            interest(interest_rate);
         }
        else
        {
            printf("Invalid interest rate\n");
        }
     }
     else
     {
          printf("Failed to read the interest rate\n");
     }
     
     break;

     case 'A'+15:
     printAccuont();
     
     break;

     case 'A'+4:
     closeAllAccounts();
     
     break;

     default:
     printf ("Invalid transaction type\n");
     ;
     break;


    }
    }while(c!= 'E');

return 0;
}




