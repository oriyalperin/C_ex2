#include "myBank.h"
#include <stdio.h>
static int accCounter=0; //the latest 
static float accounts[50][2]; 

float twoDigits(float amount)
{
    return (int)(amount*100)/100.0;
}

int isOpen(int account_number)
{    int index=account_number-startAccNum;
    if(accounts[index][colStatus]==1)
        return 1;
    return 0;
}

int isFull(int account_number)
{
if(accCounter==maxAccounts)
    return 1;
else
{
    return 0;
}

}
void openAccount(float amount)
{
    
   
            for(int i=0;i<maxAccounts;i++)
            {
                if(accounts[i][colStatus]==0)
                {
                    accounts[i][colCach]=twoDigits(amount);
                    accounts[i][colStatus]=1;
                    printf("New account number is: %d\n", startAccNum+i);
                    break;
                }
            }
            accCounter++; //resize number of accounts

}

void checkBalance(int account_number)
{
    
     
        int index=account_number-startAccNum;
        
            printf("The balance of account number %d is: %.2f\n",account_number, accounts[index][colCach]);
        

}
void depositing(int account_number, float amount)
{ 
  
     int index=account_number-startAccNum;   
     accounts[index][colCach]+=twoDigits(amount);
     printf("The new balance is: %.2f\n", accounts[index][colCach]);

}
void getCach(int account_number, float amount)
{ 
    int index=account_number-startAccNum;
                amount=twoDigits(amount);
                if(accounts[index][colCach]>=amount)
                {
                    accounts[index][colCach]-=amount;
                    printf("The new balance is: %.2f\n", accounts[index][colCach]);
                }
                else
                {
                    printf("Cannot withdraw more than the balance\n");
                }     

}
void closeAccount(int account_number)
{ 
    
        int index=account_number-startAccNum;
           accounts[index][colStatus]=0;
                accCounter--;
                printf("Closed account number %d\n",account_number);
            

    
}
void interest(int interest_rate)
{

        float ribit= interest_rate/100;
            for(int i=0;i<maxAccounts;i++)
            {
                if(accounts[i][colStatus]==1)
                {
                    
                    accounts[i][colCach]+=twoDigits(ribit*accounts[i][colCach]);

                }

            }

}
void printAccuont()
{

  for(int i=0;i<maxAccounts;i++)
    {
        if(accounts[i][colStatus]==1)
        {
            printf("The balance of account number %d is: %.2f\n",startAccNum+i,accounts[i][colCach]);

        }
        
    }


  
}
void closeAllAccounts()
{

    for(int i=0;i<maxAccounts;i++)
    {
        if(accounts[i][colStatus]==1)
        {
            accounts[i][colStatus]=0;
            
        }


    }  
    accCounter=0;


}



