

#include <iostream>
/*
Operatorzy warunkowe:
> - większe
< - mniejsze
>= - większe bądź równe
<= - mniejsze bądź równe
== - równe
!= - różne

Operatorzy logiczne:
&&- AND
||- OR
!- NOT

a   b    a&&b   a||b    !a
F   F     F     F      T
F   T     F     T      F
T   F     F     T      F
T   T     T     T      F

F - false
T - true
*/
//Napisz program, który wyświetli informacje czy liczba jest dodatnia czy nie.
void task1()
{
	int number;
	std::cout << "Podaj liczbe:\n";
	std::cin >> number;

	if (number > 0)
		std::cout << "Liczba jest dodatnia\n";

	if (number < 0)
		std::cout << "Liczba jest ujemna\n";

	if (number == 0)
		std::cout << "Liczba jest rowna zero\n";

	std::cout << "Koloejna instrukcja\n";
}

//NAPISZ PROGRAM, KTÓRY WYŚWIETLI INFORMACJE CZY LICZBA JEST PARZYSTA CZY NIEPARZYSTA.
void task2()
{
	int number;
	std::cout << "Podaj liczbe:\n";
	std::cin >> number;

	int rest = number % 2;

	if (rest == 0)
		std::cout << "Liczba jest parzysta\n";

	if (rest != 0) // rest ==1
		std::cout << "Liczba jest nieparzysta\n";

	if (rest == 0)
		std::cout << "Liczba jest parzysta\n";
	else
		std::cout << "Liczba jest nieparzysta\n";
}

//Napisz program, który wyświetli inforacje czy liczba jest z zakresu <1 ; 10).
void task3()
{
	int number;
	std::cout << "Podaj liczbe:\n";
	std::cin >> number;
	//wersja 1
	if (number >= 1) //NUMBER > 0
	{
		if (number < 10) //NUMBER <=9
			std::cout << "Liczba jest w przedziale\n";
		else
			std::cout << "Liczba jest z poza zakresu\n";

	}
	else
		std::cout << "Liczba z poza zakresu\n";
	//wersja 2
	if (number >= 1)
		if (number < 10)
			std::cout << "Liczba jest w przedziale\n";
		else
			std::cout << "Liczba z poza zakresu\n";
	//wersja 4
	if (number < 1 && number >= 10)
		std::cout << "Liczba z poza zakresu\n";
	else
		std::cout << "Liczba jest w przedziale\n";
}

//Napisz program, który wykona dzielenie dwóch liczb 
void task4()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj liczbe:\n";
	std::cin >> firstNumber;
	std::cout << "Podaj liczbe:\n";
	std::cin >> secondNumber;

	if (secondNumber != 0)
	{
		int quoitent = firstNumber / secondNumber;
		std::cout << " wynik dzielenia" << quoitent << "\n";
	}
	else
		std::cout << "Dzielenie przez zero!\n";
}

/*
* .Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i sprawdzi, czy są one równe.Wyświetl odpowiedni komunikat.
* .Napisz program, który poprosi użytkownika o podanie wieku i sprawdzi, czy osoba jest pełnoletnia.Wyświetl odpowiedni komunikat.
* .Napisz program, który poprosi użytkownika o podanie liczby całkowitej i obliczy jej wartość bezwzględną.Wyświetl wynik.
* .Napisz program, który poprosi użytkownika o podanie liczby od 1 do 7 i wyświetli odpowiadający mu dzień tygodnia.
* .Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i wyświetli większą z nich.
* .Napisz program, który poprosi użytkownika o podanie roku i sprawdzi, czy jest to rok przestępny.Wyświetl odpowiedni komunikat.
* .Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni komunikat.
* .Napisz program, który poprosi użytkownika o podanie masy ciała(w kilogramach) i wzrostu(w metrach).
Na podstawie tych danych oblicz wskaźnik BMI(Body Mass Index) i wyświetl odpowiedni komunikat informujący o stanie zdrowia.
* .Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt.Wyświetl odpowiedni komunikat.
* .Napisz program, który poprosi użytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeśli jest to możliwe.Wyświetl wynik lub odpowiedni komunikat, jeśli liczba jest ujemna.
* .Program sprawdzający czy podana data jest poprawna(np.sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
*/

void task5()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwsza liczbe calkowita:\n";
	std::cin >> firstNumber;
	std::cout << "Podaj drugą liczbę całkowitą:\n";
	std::cin >> secondNumber;

	if (firstNumber == secondNumber)
		std::cout << "Liczby są sobie równe\n";

	else
		std::cout << "Liczby nie są sobie równe\n";
}

void task6()
{
	int age;
	std::cout << "Podaj swój wiek:\n";
	std::cin >> age;

	if (age >= 18)
		std::cout << "jesteś osoba pełnoletnią\n";
	else
		std::cout << "Jesteś niepełnoletni\n";
}

void task7()
{
	int NumberFromUser, absoluteNumber;
	std::cout << "Podaj liczbę całkowitą\n";
	std::cin >> NumberFromUser;

	if (NumberFromUser > 0)
		absoluteNumber = NumberFromUser;
	else
		absoluteNumber = NumberFromUser * -1;
	std::cout << absoluteNumber;
}

void task8()
{
	int numberDay;
	std::cout << "Podaj liczbę od 1 do 7\n";
	std::cin >> numberDay;

	if (numberDay == 1)
		std::cout << "To jest poniedziałek\n";

	if (numberDay == 2)
		std::cout << "To jest wtorek\n";

	if (numberDay == 3)
		std::cout << "To jest środa\n";

	if (numberDay == 4)
		std::cout << "To jest czwartek\n";

	if (numberDay == 5)
		std::cout << "To jest piatek\n";

	if (numberDay == 6)
		std::cout << "To jest sobota\n";

	if (numberDay == 7)
		std::cout << "To jest niedziela\n";

}

//Napisz program, który poprosi użytkownika o podanie dwóch liczb całkowitych i wyświetli większą z nich.
void task9()
{
	int firstNumber, secondNumber;
	std::cout << "Podaj pierwszą liczbę całkowita:\n";
	std::cin >> firstNumber;
	std::cout << "Podaj drugą całkowita:\n";
	std::cin >> secondNumber;

	if (firstNumber > secondNumber)
		std::cout << firstNumber;
	else
		std::cout << secondNumber;
}

void task10()
{
	int numberYear;
	std::cout << "Podaj rok\n";
	std::cin >> numberYear;

	if (numberYear % 4 == 0 && numberYear % 100 != 0 || numberYear % 400 == 0)
		std::cout << "Ten rok jest przestępny\n";
	else
		std::cout << "Ten rok nie jest przestępny\n";
}

//.Napisz program, który poprosi użytkownika o podanie liczby całkowitej i sprawdzi, czy jest ona podzielna zarówno przez 3, jak i przez 5. Wyświetl odpowiedni komunikat.

void task11()
{
	int firstNumber;
	std::cout << "Podaj liczbę całkowitą\n";
	std::cin >> firstNumber;

	if (firstNumber % 3 == 0)
		if (firstNumber % 5 == 0)
			std::cout << "Ta liczba jest podzielna przez 3 i przez 5\n";
		else
			std::cout << "Ta liczba nie jest podzielna przez 5\n";
	else
		std::cout << "Ta liczba nie jest podzielna przez 3\n";
}

//Napisz program, który poprosi użytkownika o podanie masy ciała(w kilogramach) i wzrostu(w metrach).

void task12()
{
	int bodyWeight, height, BMI;
	std::cout << "Podaj swoja wagę\n";
	std::cin >> bodyWeight;
	std::cout << "Podaj swój wzrost (w metrach)\n";
	std::cin >> height;
	BMI = bodyWeight / (height + height);

	if (BMI < 16)
		std::cout << "jesteś wygłodzony\n";
	if (BMI == 16 || BMI < 17)
		std::cout << "jesteś wychudzony\n";
	if (BMI == 17 || BMI < 18.5)
		std::cout << "masz niedowagę\n";
	if (BMI == 18.5 || BMI < 25)
		std::cout << "twoja waga jest prawidłowa\n";
	if (BMI == 16 || BMI < 30)
		std::cout << "masz nadwagę\n";
	if (BMI == 16 || BMI < 35)
		std::cout << "masz otyłość I stopnia\n";
	if (BMI == 16 || BMI)
		std::cout << "masz otyłość II stopnia\n";
	if (BMI > 40)
		std::cout << "masz skrajną otyłość\n";
}

//Napisz program, który poprosi użytkownika o podanie długości trzech odcinków i sprawdzi, czy można zbudować z nich trójkąt.Wyświetl odpowiedni komunikat.

void task13()
{
	int firstSide, secondSide, thirdSide;
	
	std::cout << "Podaj długość pierwszego boku\n";
	std::cin >> firstSide;
	std::cout << "Podaj długość drugiego boku\n";
	std::cin >> secondSide;
	std::cout << "Podaj długość trzeciego boku\n";
	std::cin >> thirdSide;
	
	if (firstSide == 0 || secondSide == 0 || thirdSide == 0)
		std::cout << "Bok jest równy zero\n";
	else
		if (firstSide + secondSide > thirdSide && secondSide + thirdSide > firstSide && firstSide + thirdSide > secondSide)
			std::cout << "Da sie zrobić trójkąt\n";
		else
			std::cout << "Nie da się zrobić trójkąta\n";
}

//Napisz program, który poprosi użytkownika o podanie liczby dodatniej i obliczy jej pierwiastek kwadratowy, jeśli jest to możliwe.Wyświetl wynik lub odpo
//wiedni komunikat, jeśli liczba jest ujemna.

void task14()
{
	int firstNumber;
	std::cout << "Podaj liczbę dodatnią\n";
	std::cin >> firstNumber;











}


void task15()
{
	int day, month, year;
	std::cout << "podaj dzień\n";
	std::cin >> day;
	std::cout << "podaj miesiąc\n";
	std::cin >> month;
	std::cout << "podaj rok\n";
	std::cin >> year;

	if (day >= 1 && day <= 31)
		&& month >=1 && month <=12
		&& year != 0






}

int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
	task14();
	task15();
}
