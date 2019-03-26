// Zadanie 4: Dostosuj funckje "readFromFile" w taki sposób aby poprawnie wczytywala obiekty z pliku User.txt oraz Car.txt i wypisywałaje na konsoli
//
// Wywołanie:
//		readList<Car>("Car.txt");
//		readList<User>("User.txt");

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class User {
private:
	int id;
	std::string firstName;
	std::string lastName;
public:
	User() = default;
	User(int id, std::string firstName, std::string lastName) :id(id), firstName(firstName), lastName(lastName) {};

	friend std::ostream& operator<< (std::ostream& os, User& obj)
	{
		os << "User :" << obj.id << " " << obj.firstName << " " << obj.lastName << std::endl;
		return os;
	};

	friend std::istream & operator >> (std::istream &in, User &obj)
	{
		in >> obj.id;
		in >> obj.firstName;
		in >> obj.lastName;
		return in;
	};
};

class Car {
private:
	int id;
	std::string brand;
	std::string model;
public:
	Car() = default;
	Car(int id, std::string brand, std::string model) :id(id), brand(brand) ,model(model){};

	friend std::ostream& operator<< (std::ostream& os, Car& obj)
	{
		os << "Car :" << obj.id << " " << obj.brand << " " << obj.model << std::endl;
		return os;
	};

	friend std::istream & operator >> (std::istream &in, Car &obj)
	{
		in >> obj.id;
		in >> obj.brand;
		in >> obj.model;
		return in;
	};
};

template <class T>
void readList(std::string nazwa) {
	fstream plik;
	plik.open(nazwa, ios::in);

	if (plik.good()) {
		T element;
		while (plik >> element) {
			std::cout << element;
		}
		plik.close();
	}
}

int main()
{
	readList<Car> ("Car.txt");
	readList<User>("User.txt");
    return 0;
}

