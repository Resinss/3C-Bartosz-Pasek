#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

//3_1.
int skrNumber(int liczba) {
    int potega = 1;
    int wynik = 0;

    while (liczba > 0) {
        int cyfra = liczba % 10;
        if (cyfra % 2 == 1) {
            wynik += cyfra * potega;
            potega *= 10;
        }
        liczba /= 10;
    }

    return wynik;
}

int gcd(int a, int b) {
    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

int main() {
    //3_2
    cout << "zad3.2\n";
    ifstream plik("skrot.txt");
    vector<int> liczby;

    if (!plik) {
        cerr << "Nie udalo sie otworzyc pliku!" << endl;
        return 1;
    }

    int liczba;
    while (plik >> liczba) {
        liczby.push_back(liczba);
    }
    plik.close();

    vector<int> bezSkrotu;
    for (int n : liczby) {
        if (skrNumber(n) == 0) {
            bezSkrotu.push_back(n);
        }
    }

    if (!bezSkrotu.empty()) {
        cout << bezSkrotu.size() << " ";
        cout << *max_element(bezSkrotu.begin(), bezSkrotu.end()) << endl;
    }
    else {
        cout << "Brak liczb bez skrotu" << endl;
    }

    //3_3
    cout << "zad3.3\n";
    ifstream plik2("skrot2.txt");
    vector<int> liczby2;

    if (!plik2) {
        cerr << "Nie udalo sie otworzyc pliku!" << endl;
        return 1;
    }

    while (plik2 >> liczba) {
        liczby2.push_back(liczba);
    }
    plik2.close();

    for (int n : liczby2) {
        int skrot = skrNumber(n);
        if (gcd(n, skrot) == 7) {
            cout << n << endl;
        }
    }

    return 0;
}
