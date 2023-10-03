#include <iostream>

/*
*. Program obliczający pole prostokąta. 3
*. Program obliczający objętość stożka. 4
*. Program obliczający pole koła.
*. Program obliczający wartość wyrażenia a^2 + b^2
*. Program obliczający pole trójkąta o podstawie b i wysokości h
*. Program obliczający objętość kuli o promieniu r
*. Program obliczający pole trapezu o podstawach a i b oraz wysokości h
*. Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*. Stwórz program, który pobiera od użytkownika długość w metrach i przelicza ją na centymetry i milimetry, wyświetlając wynik.
*. Napisz program, który konwertuje wprowadzoną kwotę w jednej walucie na inną, korzystając z określonego kursu wymiany.
*/

//Napisz program który wczyta liczbę od uzytkownika i ją wkleji 

void task1()
{
    int numberFromUser;
	std::cout << "Podaj liczbe\n";
	std::cin  >> numberFromUser;

	std::cout << "Podales " << numberFromUser << "\n";
}


//Program obliczający średnią artymatyczną dwóch liczb.
void task2()
{
	std::cout << "Podaj liczbę pierwszą\n";
	int firstNumber, secondNumber;
	std::cin >> firstNumber;
	std::cout << "Podaj drugą liczbę\n";
	std::cin >> secondNumber ;
	
	int avarge;
	avarge = (firstNumber + secondNumber) / 2;

	std::cout << "Średnia to: " << avarge << "\n";
}




void task3()
{
	int pierwszy_bok, drugi_bok;
	std::cout << "Podaj pierwszy bok\n";
	std::cin >> pierwszy_bok;
	std::cout << "Podaj drugi bok\n";
	int secondNumber;
	std::cin >> drugi_bok;
	int area;
	area = pierwszy_bok * drugi_bok;
	std::cout << "Pole wynosi:";
    std::cout << area;
}

void task4()
{
	int cone_base, cone_height;
	std::cout << "Podaj podstawe stożka\n";
	std::cin >> cone_base;
	std::cout << "Podaj wysokość stożka\n";
		std::cin >> cone_base;
		int area;
		area = 1/3*cone_height*3.14*r*r;
		std::cout << "Objętość wynosi:";
		std::cout << area;







}




int main()
{
	setlocale(LC_CTYPE, "polish");
	//task1();
	//task2();
	//task3();
	task4();
}



/*
Algorytm-zbiór instrukcji, który rozwiązuje zadany problem.
Określa też kolejność wykonywanych instrukcji
Zapis algorytmu:
*rysunek
*w punktach
* schemat budowy
* kod źródłowy danego jeżyka programowania
* pseudokod


Zmienna - pewien obszar w pamięci operacyjnej, w której można w denej chwili przechować tylko jedną daną.

Instrukcja deklaracji zmiennej
typ_zmiennej nazwa_zmiennej;


Typ zmiennej - wielkość obszsau pamięci, interpretacja ciągu bitów
int- liczba całkowita ze zankiem <-2 147 483 648, 2 147 483 647>
short - 2 bajtowa liczba całkowita ze znakiem <-32 768, 32 767>
long - to comao co int 
long long - 8 bajtowa liczba ze znakiem <-9 223 372 836m 854 775 888, 9 223 272 836 854 775 887>

unsigned - zmienna bez znajku <8, 2*max.
float - bajtowa liczba rzeczywista, dokładność 6-7 cyfr po przecinku 
dounle - 8 bajtowa liczba rzeczywista, dokładność 15-16 cyfr po przecinku 
long double - 12 bajtowa liczba rzeczywista, dokładność 19-20 cyfr po przecinku 
Nazwa zmiennej - nazwa obszaru pamięci, identyfikator  
Warunki niezbędne:
* dozwoleone znaki:
   - alfabert angielski
   -cyfry arabskie 0-9
   -podkreślenie (podłoga)
* pierwszym znkiem nie może byc cyfra
* unikalny w swoim zalkresie widoczności 
* nie może to być słowo kluczowe (zarezerwowne) danego języka 

Warunki programistów:
* nazwa zmiennej powinna dawac charakter wykonywanych danych 
* jeśli wiele słów w  miejscu sapcji wstawiamy podkreślenie albozaczynając od drugiego słowa piszemy je z dużej litry 
* piszemy po angielsku
*




*/