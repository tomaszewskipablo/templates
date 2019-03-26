// Zadanie 3.1: Stwórz klase szablonowa ktora w konstruktorze bedzie
//	przyjmować 2 argumenty liczbowe tego samego typu i przypisze je
//  do pol o nazwach a i b. Następnie stwórz metode "Multiply" ,która wypisze
//	wynik mnożenia tych 2 liczb przez siebie w konsoli
//
//
//	Zadanie 3.2: Dodaj odpowiednia funkcjonalność (Podpowiedz: wzorzec szczegołowy) tak aby po wpisaniu dwoch
//	lańcuchów znaków (char*) funkcjia wypisywała dlugość pierwszego łancucha pomnozoną przez długość drugiego łańcucha 
//
//  Zadanie 3.3: Stworz nowa klase taka aby mogła przyjmować 2 argumenty o różnych typach liczb
//  (np. double * int),zainplementuj funkcje "Multiply", wypisz wynik działania w konsoli.
//	Wywołanie: mojaKlasa<int,double> nazwa_klasy(2,2.50);



#include "stdafx.h"
#include <iostream>
#include <string.h>

//Do Zadania 3.1
// class Math {

// };

//Do Zadania 3.2
// class Math<> {

// };

//Do Zadania 3.3
// class Math2 {
// private:
// 	T a;
// 	K b;
// public:
// 	Math2( /*WPISZ TU COS*/ ) {
// 		this->a = a;
// 		this->b = b;
// 	}
// 	void Mulitiply() {
// 		std::cout << a * b << std::endl;
// 	}
// };

int main()
{
	Math<int> mojaKlasaInt(2, 2);
	mojaKlasaInt.Mulitiply();

	Math<char*> mojaKlasaString("22", "2.50");
	mojaKlasaString.Mulitiply();

	Math2<int,double> mojaKlasaIntDouble(2 , 2.5);
	mojaKlasaIntDouble.Mulitiply();
    return 0;
}

