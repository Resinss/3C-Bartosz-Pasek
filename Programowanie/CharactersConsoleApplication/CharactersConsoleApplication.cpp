#include <iostream>

/*
* Napisz program, który bêdzie prosi³ o has³o. Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
* Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
* Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym. Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.
* Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
* Program wyci¹gaj¹cy informacje z numeru PESEL
* Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).

* Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP. Np. na wejœciu 2+3*4 na wyjœcu da 234*+
* Program, który na wejœciu przyjmie rówanie w ONP a na wyjœciu wyœwietli wynik rówania.
* Algorytm szyfrowania AtBash Cipher - algorytm szyfruj¹cy, w którym ka¿da litera jest zamieniana na literê z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
*/


//Napisz program który pobierze znak od u¿ytkownika i wyœwieli go.
void task1()
{
    char characterFromUser;
    std::cout << "Podaj znak\n";
    std::cin >> characterFromUser;

    std::cout << "Poda³eœ znak:" << characterFromUser << "\n";
}

//Napisz program, który wczyta znak z klawiatury 
//i sprawdzi czy jest to ma³a litera alfabetu.
void task2()
{
    unsigned char characterFromUser;
    std::cout << "Podaj znak\n";
    std::cin >> characterFromUser;

    //if (characterFromUser >= 97 && characterFromUser <= 122)
    if (characterFromUser >= 'a' && characterFromUser <= 'z')
        std::cout << "Jest to ma³a litera alfabetu\n";
    else
        std::cout << "Nie jest to ma³a litera alfabetu\n";

    /*char x = 'a';
    std::cout << x;
    x = 'g' + 1;
    std::cout << x;
    x = 100;
    std::cout << x;*/

}

//Napisz program, który poprosi cie o twoje imiê i ciê przywita.
void task3()
{
    std::string userName;
    std::cout << "Podaj swoje imie\n";
    std::cin >> userName;

    std::cout << "Witaj " << userName << " tutaj.\n";
}

//Program sprawdzaj¹cy czy podane has³o jest poprawne 
//(np. jeœli has³o jest "abc123", program powinien wyœwietliæ "has³o poprawne", 
//jeœli jest inne, powinien wyœwietliæ "has³o niepoprawne").
void task4()
{
    std::string password;
    std::cout << "Podaj has³o\n";
    std::cin >> password;

    if (password == "abc123")
        std::cout << "Has³o poprawne\n";
    else
        std::cout << "Has³o niepoprawne\n";
}

//Napisz program, który wczyta ³añcuch znaków i policzy ile jest ma³ych liter 'a'.
void task5()
{
    std::string textFromUser;
    std::cout << "Podaj ³añcuch znaków\n";
    std::cin >> textFromUser;

    int numberOfCharacters = 0;

    //std::cout << "Pierwszy znak to " << textFromUser[0] << "\n";
    //textFromUser[1] = 'x';
    //std::cout << "Iloœæ znaków " << textFromUser.length()  << "\n";

    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a')
            numberOfCharacters++;
    }

    std::cout << "Ma³ych liter 'a' jest " << numberOfCharacters << "\n";
}

//Napisz program, który bêdzie prosi³ o has³o. Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task6()
{
    std::string password;


    do {
        std::cout << "podaj has³o\n";
        std::cin >> password;
    } while (password != "abc123");
    std::cout << "has³o poprawne";

}

//Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
void task7()
{
    std::string characterFromUser;
    std::cout << "Podaj cig znaków: ";
    std::cin >> characterFromUser;

    //samog³oska
    int numberOfVowel = 0;
    //spó³g³oska
    int numberOfConsonant = 0;

    for (int i = 0; i < characterFromUser.length(); i++)
    {
        if (characterFromUser[i] == 'a'
            || characterFromUser[i] == '¹'
            || characterFromUser[i] == 'e'
            || characterFromUser[i] == 'ê'
            || characterFromUser[i] == 'i'
            || characterFromUser[i] == 'o'
            || characterFromUser[i] == 'u'
            || characterFromUser[i] == 'y')
            numberOfVowel++;
        else if (characterFromUser[i] >= 'a' && characterFromUser[i] <= 'z')
            numberOfConsonant++;
    }
    std::cout << "W tym ciagu jest " << numberOfVowel << " samog³osek i " << numberOfConsonant << " spó³g³osek\n";
}

    //Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym.
//Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.
    void task8()
    {
        int numberFromUser;
        int tmpNumber;
        std::string tmpNumberInBin;
        std::string numberInBin;
        std::cout << "Podaje liczbe: \n";
        std::cin >> numberFromUser;
        tmpNumber = numberFromUser;

        do
        {
            tmpNumberInBin = tmpNumber / 2;
            numberInBin = numberInBin + tmpNumberInBin;
        } while (tmpNumber == 0);

        std::cout << numberInBin << "\n";



    }

    // Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem 
    // (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
    void task9()
    {
        std::string textFromUser;
        std::cout << "podaj tekst\n";
        std::cin >> textFromUser;  

        //wersja 1
        std::string reverseText;
       
        for (int i = textFromUser.length() - 1; i >= 0; i--)
        {
            reverseText = reverseText + textFromUser[i];
        }
       /*
        for (int i = textFromUser.length() - 1; i >= 0; i--)
        {
            reverseText = reverseText + textFromUser[i];
        }
        */
        
        if (textFromUser == reverseText)

                std::cout << "ten tekst jest palindromem\n";
            else
                std::cout << "ten tekst nie jest palindromem\n";
       
        //wersja 2
        bool isPalindrome = true;

        for (int signFromBegining = 0, signFormEnd = textFromUser.length() - 1; signFromBegining < signFormEnd; signFromBegining++, signFormEnd--)
        {
            if (textFromUser[signFromBegining] != textFromUser[signFormEnd])
            {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome /*== true*/)
            std::cout << "Ten tekst jest palindromem\n";
        else
            std::cout << "Ten tekst nie jest palindromem\n";
    }

    //Algorytm szyfrowania AtBash Cipher - algorytm szyfruj¹cy, w którym ka¿da litera jest zamieniana na literê z przeciwnej strony alfabetu (np. A na Z, B na Y itd.)
    void task10()
    {
        std::string textFromUser;
        std::cout << "podaj tekst\n";
        std::cin >> textFromUser;

        for(int i = 0; i < textFromUser.length(); i++)
        {
            if (textFromUser[i] >= 'a' && textFromUser[i] <= 'z')
                textFromUser[i] = 'z' - (textFromUser[i] - 'a');

            if (textFromUser[i] >= 'A' && textFromUser[i] <= 'Z')
                textFromUser[i] = 'Z' - (textFromUser[i] - 'A');

            if (textFromUser[i] >= '0' && textFromUser[i] <= '9')
                textFromUser[i] = '9' - (textFromUser[i] - '0');
        }
        std::cout << "zaszyfrowany tekst: " << textFromUser << "\n";

        for (int i = 0; i < textFromUser.length(); i++)
        {
            if (textFromUser[i] >= 'a' && textFromUser[i] <= 'z')
                textFromUser[i] = 'a' + ('z' - textFromUser[i]);

            if (textFromUser[i] >= 'A' && textFromUser[i] <= 'Z')
                textFromUser[i] = 'A' + ('Z' - textFromUser[i]);

            if (textFromUser[i] >= '0' && textFromUser[i] <= '9')
                textFromUser[i] = '0' + ('9' - textFromUser[i]);
        }
        std::cout << "rozszfrowany tekst " << textFromUser << "\n";
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
    task10();

}

/*
Typy znakowe:
* char - 1 bajt ca³kowitoliczbowa ze znakiem <-128; 127>

*/