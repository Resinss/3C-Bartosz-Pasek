
#include <iostream>

//Napisz program który policzy syme cyfr podanej przez u¿ytkownika.
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

//Napisz program, który policzy NWD dwóch liczb.
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

//Sprawdzanie czy liczba jest palindromem.
void task3()
{
	int number;
	std::cout << "Podaj liczbê\n";
	std::cin >> number;

	//wersja 1

	//obliczam iloœæ cyfr
	int tmpNumber = number;
	int numberOfDigit = 1;
	while (tmpNumber >= 10)
	{
		numberOfDigit++;
		tmpNumber = tmpNumber / 10;
	}

	//liczê 10 do potêgi (numberOfDigit - 1)
	int leftDivided = 1;
	while (numberOfDigit != 1)
	{
		leftDivided *= 10;
		numberOfDigit--;
	}

	int rightDivided = 10;
	int leftNumber = number;
	int rightNumber = number;

	bool isPalindrome = true;
	while (leftNumber > 10)
	{
		int leftDigit = leftNumber / leftDivided;
		int rightDigit = rightNumber % rightDivided;
		if (leftDigit != rightDigit)
		{
			isPalindrome = false;
			break;
		}

		leftNumber = leftNumber % leftDivided;
		rightNumber = rightNumber / rightDivided;

		leftDivided = leftDivided / 10;
	}

	if (isPalindrome /*== true*/)
		std::cout << "Liczba jest palindromem\n";
	else
		std::cout << "Liczba nie jest palindromem\n";
}

//Napisz program, który wyswietli "Hello world" tyle razy ile chce u¿ytkownuik.
void task4()
{
	int howManyTimes;
	std::cout << "Podaj ile razy ma wyswietlic\n";
	std::cin >> howManyTimes;

	int i = 0;
	while (i != howManyTimes)
	{
		std::cout << "Hello world\n";
		i++;
	}
}

//Napisz program, który wyœwietli liczby parzyste do podanej przez u¿ytkownika liczby.
void task5()
{
	int upperRange;
	std::cout << "Podaj gorna granice do wyswietlenia\n";
	std::cin >> upperRange;

	int i = 0;
	while (i <= upperRange)
	{
		std::cout << i << "\n";
		i += 2;
	}
}

int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	task5();
}

