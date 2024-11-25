#include <iostream>

class Figura {
public:
	virtual void obliczPole() = 0;
};

class Trapez : public Figura {
public:
	double a, b, h;
	Trapez(double baseA, double baseB, double height) : a(baseA), b(baseB), h(height) {}
    double obliczPole() {
		return ((a + b) * h) / 2;
		
	}
};

class Rownoleglobok : public Figura {
public:
	Rownoleglobok(double baseA, double height) : a(baseA), h(height) {}
	void obliczPole() override {
		std::cout << "Pole rownolegloboku: " << a * h << std::endl;
	}
};

class Romb : public Figura {
public:
	Romb(double sideA, double height) : a(sideA), h(height) {}
	void obliczPole() override {
		std::cout << "Pole rombu: " << a * h << std::endl;
	}
};

class Prostokat : public Prostokat {
public:
	Prostokat (double sideA,double bokB) : a(sideA), b(bokB) {}
	void obliczPole() {
		return a * b;
	}
};

class Kwadrat {
public:
	double a;
	Kwadrat(double sideA) : a(sideA)  {}
	double obliczPole()  {
		return a * a;
	}
};


int main() {
	Trapez trapez(3, 5, 4);
	std::cout << "Pole trapezu: " << trapez.obliczPole() << std::endl;

	Romb romb(5, 4);
	std::cout << "Pole rombu: " << romb.obliczPole() << std::endl;

	Prostokat prostokat(4, 6);
	std::cout << "Pole prostokata: " << prostokat.obliczPole() << std::endl;

	Kwadrat kwadrat(4);
	std::cout << "Pole kwadratu: " << kwadrat.obliczPole() << std::endl;

	return 0;
}
