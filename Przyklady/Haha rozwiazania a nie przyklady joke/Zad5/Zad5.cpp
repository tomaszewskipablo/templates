// Zadanie 5: Dodaj do klasy Contener szablon funkcjie odpowiedzialnej za dodawanie elementu o konkretnym typie do
// odpowiedniego pola ( uzyj typeid() ) oraz wyswietlajaca kompunikat jakiego typu element dodalismy i aktualna sume elementow
//
//	Wywołanie:
//		contener.addElement<int>(5);
//		contener.addElement<double>(5.23);
//

#include "stdafx.h"
#include <iostream>

class Contener {
private:
	int sumaIntow;
	double sumaDoubli;
public:
	Contener() :sumaIntow(0), sumaDoubli(0) {};
	template<class T>
	void addElement(T element) {
		if (typeid(int) == typeid(T)) {
			sumaIntow += element;
			std::cout << "Dodano element o typie <int>" << std::endl;
			std::cout << "Suma intow wynosi: " << sumaIntow << std::endl;
		}
		else if (typeid(double) == typeid(T)) {
			sumaDoubli += element;
			std::cout << "Dodano element o typie <double>" << std::endl;
			std::cout << "Suma doubli wynosi: " << sumaDoubli << std::endl;
		}
		else
		{
			std::cout << "Proba dodania elementu o niewlasciwym typie" << std::endl;
		};
	}
};

int main()
{
	Contener contener;
	contener.addElement<int>(5);
	contener.addElement<double>(5.23);

    return 0;
}

