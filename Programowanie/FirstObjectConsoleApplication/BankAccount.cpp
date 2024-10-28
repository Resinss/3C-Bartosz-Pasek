#include <iostream>
#include "BankAccount.h"

void BankAccount::SetBalance(double b)
{
	if (b >= 0)
			&& isBalanceExecute == false) //aby mozna bylo tylko raz wywolac metode
	{
		balance = b;

		isBalanceExecute = true;
	}
}

double BankAccount::GetBalance()
{
	//instrukcja zabezpieczajaca
	return balance;
}




void BankAccount::AccountInformation()
{
	std::cout << "Informacja o koncie bankowym\n";
	std::cout << "W³aœciciel: " << owner << "\n";
	std::cout << "Saldo: " << balance << " " << currency << "\n";
}
void BankAccount :: DepositToAccount(double amount)
{
	if (amount >= 0)
		balance = balance + amount;

}

void BankAccount::WidthdrawalFromAccount(double amount)
{
	if (amount >= 0

	&& balance >= amount)
	balance = balance - amount;
	return true;

}
return false;


void TransferBeetwenAccounts(BankAccount& targetAccount, double amount)
{
	if (WidthdrawalFromAccount(amount))
		targetAccount.DepositToAccount(amount);

}