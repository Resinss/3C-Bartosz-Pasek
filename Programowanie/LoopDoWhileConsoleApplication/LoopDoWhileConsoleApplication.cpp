
#include <iostream>


//Napisz program, który ma pobraæ od u¿ytkownika liczbê dodatni¹. 
//Zabezpiecz program przed pobieraniem liczb ujemnych.
void task1()
{
	int numberFromUser;
	std::cout << "Podaj liczbê doodatni¹:\n";
	std::cin >> numberFromUser;
	if (numberFromUser < 0)
	{
		std::cout << "Podaj liczbê doodatni¹:\n";
		std::cin >> numberFromUser;
		if (numberFromUser < 0)
		{
			std::cout << "Podaj liczbê doodatni¹:\n";
			std::cin >> numberFromUser;
			if (numberFromUser < 0)
			{
				std::cout << "Podaj liczbê doodatni¹:\n";
				std::cin >> numberFromUser;
				if (numberFromUser < 0)
				{
					std::cout << "Podaj liczbê doodatni¹:\n";
					std::cin >> numberFromUser;
					//wklejamy ca³ego If'a
				}
			}
		}
	}

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

void task2()
{
	int numberFromUser;

	do
	{
		std::cout << "Podaj liczbê doodatni¹:\n";
		std::cin >> numberFromUser;
	} while (numberFromUser < 0);

	std::cout << "Liczba dodatnia pobrana od uzytkownika " << numberFromUser << "\n";
}

void task3()
{
	const int LOWER_RANGE = 1;
	const int UPPER_RANGE = 100;
	srand(time(NULL));
	int randomNumber = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
	//std::cout << randomNumber << "\n";

	int numberFromUser;

	/*
		std::cout << "Podaj liczbe\n";
		std::cin >> numberFromUser;
	if (numberFromUser !=randomNumber)
	{
	   std::cout << "Podaj liczbe\n";
		std::cin >> numberFromUser;
	   if (numberFromUser !=randomNumber)
	   {
		   std::cout << "Podaj liczbe: \n";
		   std::cin >> numberFromUser;
	   }

	}*/

	do
	{
		std::cout << "podaj liczbe:\n";
		std::cin >> numberFromUser;
		if (numberFromUser > randomNumber)
			std::cout << "za duza liczba\n";
		if (numberFromUser < randomNumber)
			std::cout << "za mala liczba\n";
	} while (numberFromUser != randomNumber);

	std::cout << "Gratulacje!!!\n";
}

void task4()
{
	//std::cout << "1, 2, 3, 4, 5, 6 \n";
	unsigned long long upperRange;
	std::cout << "Podaj górny zakres wiêkszy badx rowny 1\n";
	std::cin >> upperRange;

	/*
	std::cout << "1, ";
	if ( upperRange >1)
	{
		std:: cout << "2, ";
		if (upperRange > 2)
		{
			std:: cout << "3, ";
			if (upperRange > 3)
			{
			   std::cout << "4, ";
			   //....
			}
		}
	}
	*/

	unsigned long long currentNumber = 0;
	do
	{
		//currentNumber = currentNumber + 1;	
		//currentNumber += 1;
		//currentNumber++;
		currentNumber = currentNumber + 1;
		std::cout << currentNumber << ", ";
	} while (upperRange > currentNumber);
}

void task5()
{
	int number;
	std::cout << "Podaj liczbê\n";
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

	do
	{
		rest = number % 10;
		sum = sum + rest;
		number = number / 10;
	} while (number != 0);

	std::cout << "Suma " << sum << "\n";
	//4125
}

//* Poproœ u¿ytkownika o podawanie liczb, a¿ wprowadzi zero.
//Oblicz sumê oraz œredni¹ artymetyczn¹ wprowadzonych liczb.

void task6()
{
	int number;
	int sum = 0;
	int numberOfNumbers = 0;

	std::cout << "Podaj liczbe:\n";
	std::cin >> number;
	sum = sum + number;
	numberOfNumbers++;
	if (number != 0)
	{
		std::cout << "Podaj liczbe:\n";
		std::cin >> number;
		sum = sum + number;
		numberOfNumbers++;
		if (number != 0)
		{
			std::cout << "Podaj liczbe:\n";
			std::cin >> number;
			sum = sum + number;
			numberOfNumbers++;
			if (number != 0)
			{
				std::cout << "Podaj liczbe:\n";
				std::cin >> number;
				sum = sum + number;
				numberOfNumbers++;
				if (number != 0);
			}
		
		
		
		}
	



	}
 
	std::cout << "Suma liczb wynosi " << sum << "\n";
	double avg = sum / numberOfNumbers;
	std::cout << "Œrednia " << avg << "\n";

	do
	{
		std::cout << "Podaj liczbê:\n";
		std::cin >> number;
		sum = sum + number;
		numberOfNumbers++;
	} while (number != 0);
}

//napisz program który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej/
//nastepnie program powinien obliczyc i wyswietlic liczbe cyfr.

void task7()
{
	int number, rest;
	std::cout << "Podaj liczbe\n";
	std::cin >> number;

	do
	{
		rest = number % 10;
		std::cout << rest << ", ";
		number = number / 10;
	} while (number != 0);
}


int main()
{
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	task7();
}

