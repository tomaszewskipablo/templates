// templates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>


template<typename TypGlowny, typename TypPoboczny>
class Klasa
{
public:
	TypGlowny a;
	TypPoboczny b;
	TypGlowny dodaj()
	{
		return a + TypGlowny(b);
	}
};

int main()
{
	Klasa<int, double> Obiekt;
	Obiekt.a = 5;
	Obiekt.b = 12.75;
	std::cout << Obiekt.dodaj()  << std::endl;
}