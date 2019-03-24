// templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>


template <class T>
T coWieksze(T a, T b) {
	T wynik = (a > b) ? a : b;
	if (a == b)
		std::cout << "Oba argumenty maja wartosc ";
	return wynik;
}

int main()
{
	std::cout << coWieksze<int>(5.209, 5.290) << std::endl;
	std::cout << coWieksze<std::string>("Ala", "Alojz") << std::endl;
    std::cout << coWieksze<double>(5.209, 5.290) << std::endl;
}