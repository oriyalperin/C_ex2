#ifndef _MYBANK_H_
#define _MYBANK_H_
#define maxAccounts 50
#define colCach 0
#define colStatus 1
#define startAccNum 901


void openAccount(float amount);
void checkBalance(int account_number);
void depositing(int account_number, float amount);
void getCach(int account_number, float amount);
void closeAccount(int account_number);
void interest(int interest_rate);
void printAccuont();
void closeAllAccounts();
int isOpen(int account_number);
int isFull();

#endif


