// Zadanie 1.1: Przeksztalc voida na szablon funkcji aby mogla
// przyjmowaæ 2 argumenty tego samego typu i
// wyswietli na ekranie ich sume. przyklad:
//  Wprowadziles 1 i 2.
//  Razem tworza 3.
//  Wprowadziles 2.6 i 3.7.
//  Razem tworza 6.3.
//  Wprowadziles A i 1.
//  Razem tworza r.
//  Wprowadziles No i nie!.
//  Razem tworza No nie!.
//
// Zadanie 1.2: Uzupelnij funkcje wyswietlSumeZRzutowaniem
// tak aby moc podac argumenty roznych typow, gdzie typ pierwszego argumentu
// jest typem na ktory rzutujemy drugi argument
// wyswietlSumeZRzutowaniem<double, int>(5.7, 2) zwroci 7.7
// wyswietlSumeZRzutowaniem<int, double>(2, 5.7) zwroci 7


#include <iostream>
#include <string>

void wyswietlSume(int a, int b)
{
	int wynik = a + b;
	std::cout << "Wprowadziles " << a << " i " << b << std::endl;
	std::cout << "Razem tworza " << wynik << std::endl;
}

int main()
{
	int a = 7, b = 10;
//	wyswietlSume(a, b);
//	wyswietlSumeZRzutowaniem<int, double>(2, 5.7);
//	wyswietlSumeZRzutowaniem<double, int>(5.7, 2);
	return 0;
}

