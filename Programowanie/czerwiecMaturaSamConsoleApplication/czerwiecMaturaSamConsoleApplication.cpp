#include <iostream>
#include <fstream>
#include <vector>

void zadanie4_1()
{
    std::ifstream file("przyklad.txt");
    std::vector<int> numbers;
    int number;

    std::cout << "Zadanie 4.1 \n";
    while (file >> number) {
        int reserved = 0;
        int temp = number;
        while (temp > 0) {
            int digit = temp % 10;
            reserved = reserved * 10 + digit;
            temp /= 10;
        }
        if (reserved % 17 == 0) {
            std::cout << reserved << ", " << "\n";
        }
    }
}

void zadanie4_2()
{
    std::ifstream file("przyklad.txt");
    int number, maxNumber = 0, maxReversed = 0;

    while (file >> number) {
        int reversed = 0, temp = number;
        while (temp > 0) {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        }
        if ((number - reversed) > (maxNumber - maxReversed)) {
            maxNumber = number;
            maxReversed = reversed;
        }
        if ((reversed - number) > (maxReversed - maxNumber)) {
            maxNumber = number;
            maxReversed = reversed;
        }
    }

    std::cout << "Liczba: " << maxNumber << " ma najwiêksz¹ ró¿nicê wzglêdem odbicia: " << maxReversed << "\n";
}


bool isPrime(int n)
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

void zadanie4_3()
{
    std::ifstream file("przyklad.txt");
    int number;

    while (file >> number) {
        int reversed = 0, temp = number;
        while (temp > 0) {
            reversed = reversed * 10 + temp % 10;
            temp /= 10;
        }
        if (isPrime(number) && isPrime(reversed)) {
            std::cout << "Liczba: " << number << " i odbicie: " << reversed << " s¹ pierwsze.\n";
        }
    }
}


void zadanie4_4()
{
    std::ifstream file("przyklad.txt");
    std::vector<int> checkedNumbers;
    int number;

    while (file >> number) {
        int count = 0;

        std::ifstream tempFile("przyklad.txt");
        int tempNumber;

        while (tempFile >> tempNumber) {
            if (tempNumber == number) count++;
        }

        if (count == 2) std::cout << number << " powtarza siê 2 razy.\n";
        if (count == 3) std::cout << number << " powtarza siê 3 razy.\n";
    }
}

int main()
{
    zadanie4_1();
    //zadanie4_2();
    //zadanie4_3();
    //zadanie4_4();
}