
#include <iostream>

void task1()
{
	int number;
	std::cout << "Podaj liczbe\n";
	std::cin >> number;

	int sum = 0;
	int rest;

	/*
	rest = number % 10;
	sum = sum + rest;
	number = number / 10;
	if (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
		if (number != 0)
		{
			rest = number % 10;
			sum = sum + rest;
			number = number / 10;
			if (number != 0)
			{
				rest = number % 10;
				sum = sum + rest;
				number = number / 10;
				//if (number != 0) ...
			}
		}
	}
	*/

	while (number != 0)
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	}  

	std::cout << "Suma " << sum << "\n";
	//4125
}

void task2()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsza liczbe\n";
	std::cin >> firstNumber;
	std::cout << "Podaj druga liczbe\n";
	std::cin >> secondNumber;

	int nwd;

	nwd = firstNumber;
	/*
	if (secondNumber % nwd != 0 || firstNumber % nwd != 0)
	{
		nwd--;
		if (secondNumber % nwd != 0 || firstNumber % nwd != 0)
		{
			if (secondNumber % nwd != 0 || firstNumber % nwd != 0)
			{
				nwd--;
				//if...
			}
		}
	}
	*/

	while (secondNumber % nwd != 0 || firstNumber % nwd != 0)
	{
		nwd--;
	}
	std::cout << "NWD =" << nwd << "\n";


	//wersja 2
	nwd = 1;
	int dividend = 2;
	int tmpFirstNumber = firstNumber, tmpSecondNumber = secondNumber;
	while (tmpFirstNumber >= dividend
		&& tmpSecondNumber >= dividend)
	{
		if (tmpFirstNumber % dividend == 0
			&& tmpSecondNumber >= dividend == 0)
		{
			tmpFirstNumber = tmpFirstNumber / dividend;
			tmpSecondNumber /= dividend;
			nwd *= dividend;
		}
		else
			dividend++;
	}
	std::cout << "NWD =" << nwd << "\n";

	//WERSJA 3
	//NWD(a , b) = a      jeœli b =0
	//NWD(a , b) = NWD(b , a % b) jesli b != 0

	int a = firstNumber, b = secondNumber;
	while (b != 0)
	{
		int tmpA = a;
		a = b;
		b =tmpA % b;
	}
	nwd = a;
	std::cout << "NWD = " << nwd << "\n";

}
//Sprawdzenuie czy liczba jest palindronem.
void task3()
{

}

int main()
{
	//task1();
	//task2();
	task3();
}

