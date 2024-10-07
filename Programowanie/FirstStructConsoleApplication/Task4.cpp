#include <iostream>

struct BankAccount
{
	double balance;
	std::string owner;
	std::string currency;
};

void accountInformation(BankAccount& account)
{
	std::cout << "Informacja o konice bankowaym\n";
	std::cout << "W³aœciciel: " << account.owner << "\n";
	std::cout << "Saldo" << account.balance << " " << account.currency << "\n";
}

void depositToAccount(BankAccount& account, double amount)
{
	if (amount >= 0)
		account.balance = account.balance + amount;
}

bool widthdrawalFromAccount(BankAccount& account, double amount)
{
	if (amount >= 0
		&& account.balance >= amount)
	{
		account.balance = account.balance - amount;
		return true;
	}

	return false;
}

void transferBetweenAccounts(BankAccount &sourceAccount, BankAccount &targetAccount, double amount)
{
	if (widthdrawalFromAccount(sourceAccount, amount))
		depositToAccount(targetAccount, amount);
}

void widthrawalFromAccounts(BankAccount& account, double amount)
{
	if (amount >= 0
		&& account.balance >= amount)
		account.balance = account.balance - amount;
}

void task4()
{
	BankAccount firstAccount;
	firstAccount.balance = 7200;
	firstAccount.owner = "Jan Kowalski";
	firstAccount.currency = "z³";

	accountInformation(firstAccount);

	BankAccount secondAccount;
	secondAccount.balance = 3200;
	secondAccount.owner = "Ewa Nowak";
	secondAccount.currency = "z³";


	accountInformation(secondAccount);
}