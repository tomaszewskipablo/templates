// Zadanie 2.1: Napisz funkcje, ktora zrobi swap miedzy
// dwoma argumentami liczbowymi
// Przyklad:
// Dla a = 5, b = 9 po uzyciu
// zamien<int>(a,b) a = 9, b = 5;
//
// Zadanie 2.2: Napisz funkcje obliczajaca silnie z sumy a i b z zad1. (Przekaz do funkcji 2 argumenty)
//
// Zadanie 2.3: Napisz funkcje, w ktorej
// przekazesz jako pierwszy argument referencje 
// do zmiennej, ktora przechowuje liczbe,
// a jako drugi argument wartosc o ile przekazana liczba
// ma zostac zinkrementowana
// tj. zwieksz<double>(a, 8.1) gdzie double a = 5, zmieni wartosc a na 13.1


#include <iostream>
#include <string>

template<typename Typ>
void zamien(Typ &a, Typ &b)
{
	Typ temp = a;
	a = b;
	b = temp;
}

template<typename Typ>
Typ silnia(Typ a, Typ b)
{
	int silniaZ = int(a + b);
	Typ wynik = 1;
	if (silniaZ < 0)
	{
		std::cout << "Argument musi byc liczba naturalna" << std::endl;
		return -1;
	}
	else
	{
		for (int i = 1; i <= silniaZ; i++)
		{
			wynik = wynik * i;
		}
	}
}

template<typename Typ>
void zwieksz(Typ &a, const Typ b)
{
	a += b;
}

int main()
{
	double b = 3;
	double a = 2;
	/*zamien<double>(a, b);
	std::cout << "a: " << a << "\nb: " << b << std::endl;
	zwieksz<double>(a, 25);
	std::cout << "a: " << a << std::endl;
	std::cout << silnia<double>(a, b);*/
	return 0;
}

