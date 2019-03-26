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

	
	void addElement() {
		
	}
};

int main()
{
	Contener contener;
	contener.addElement<int>(5);
	contener.addElement<double>(5.23);

    return 0;
}

