#include <iostream>
using namespace std;

class Figura {
public:
	virtual double area() = 0;
};

class Trapez : public Figura {
public:
	double base1, base2, height;
	Trapez(double b1, double b2, double h) : base1(b1), base2(b2), height(h) {}
    double area() override {
		return ((base1 + base2) * height) / 2;
		
	}
};

class Romb : public Figura {
public:
	double side, height;
	Romb(double s, double h) : side(s), height(h) {}
	
	double area() override {
		return side * height;
	}
};

class Rownoleglobok : public Figura {
public:
	double base, height;
	Rownoleglobok(double b, double h) : base(b), height(h) {}

	double area() override {
		return base * height;
	}
};

class Prostokat : public Figura {
public:
	double lenght, width;
	Prostokat(double l, double w) : lenght(l), width(w) {}

	double area() override {
		return lenght * width;
	}
};

class Kwadrat : public Figura {
public:
	double side;
	Kwadrat(double s) : side(s)  {}

	double area() override {
		return side * side;
	}
};


int main() {
	setlocale(LC_CTYPE, "polish");
	double side;
	cout << "Podaj bok kwadratu: ";
	cin >> side;

	Kwadrat kwadrat(side);
	cout << "Pole kwadratu: " << kwadrat.area() << endl;

	double base1, base2, height;	
	cout << "Podaj podstawe1, podstawe2 i wysokoœæ trapezu";
	cin >> base1 >> base2 >> height;

	Trapez trapez(base1, base2, height);
	cout << "Pole trapezu: " << trapez.area() << endl;

	double rombSide, rombHeight;	
	cout << "Podaj bok i wysokoœærombu";
	cin >> rombSide >> rombHeight;

	Romb romb(rombSide, rombHeight);
	cout << "Polerombu: " << romb.area() << endl;

	double lenght, width;
	cout << "Podaj d³ugosc i szerokosc prostok¹ta: ";
	cin >> lenght >> width;

	Prostokat prostokat(lenght, width);
	cout << "Pole prostokata: " << prostokat.area() << endl;

	double rownoleglobokBase, rownoleglobokHeight;
	cout << "Podaj podstawe i wysokosc rownolegloboku: ";
	cin >> rownoleglobokBase >> rownoleglobokHeight;

	Rownoleglobok rownoleglobok(rownoleglobokBase, rownoleglobokHeight);
	cout << "Pole rownolegloboku: " << rownoleglobok.area() << endl;

	return 0;
}