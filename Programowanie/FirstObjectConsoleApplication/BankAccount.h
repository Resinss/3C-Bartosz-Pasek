#pragma once
#include <iostream>	

class BankAccount
{
public:
	double balance;
	std::string owner;
	std::string currency;
public:
	void AccountInformation();

	void DepositToAccount(double amount);
	bool WidthdrawalFromAccount(double amount);
	void TransferBeetweenAccounts(BankAccount& targetAccount,);
}