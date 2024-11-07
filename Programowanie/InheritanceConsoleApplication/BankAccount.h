#pragma once
#include <iostream>	

class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;
public:
	BankAccount();
	BankAccount(double b, std::string o, std::string)
	double GetBalance();

	void AccountInformation();

	void DepositToAccount(double amount);
	bool WidthdrawalFromAccount(double amount);
	void TransferBeetweenAccounts(BankAccount& targetAccount, double amount);
}