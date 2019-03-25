# Zadania

## Zadanie 1

1.1. Przekształć voida na szablon funkcji tak aby mogła przyjmować 2 argumenty tego samego typu i wyświetli na ekranie ich sumę.
  Przykład:
  ```
  Wprowadziles 1 i 2.
  Razem tworza 3.
  Wprowadziles 2.6 i 3.7.
  Razem tworza 6.3.
  Wprowadziles A i 1.
  Razem tworza r.
  Wprowadziles "No" i "nie!".
  Razem tworza "No nie!".
  ```

1.2. Uzupełnij funkcję wyswietlSumeZRzutowaniem tak aby moc podac argumenty różnych typów, gdzie typ pierwszego argumentu jest typem na który rzutujemy drugi argument:
 wyswietlSumeZRzutowaniem<double, int>(5.7, 2) zwroci 7.7
 wyswietlSumeZRzutowaniem<int, double>(2, 5.7) zwroci 7

## Zadanie 2
 2.1 Napisz funkcje, ktora zrobi swap między dwoma argumentami liczbowymi
 Przykład:
 Dla `a = 5, b = 9` po uzyciu `zamien<int>(a,b)` `a = 9, b = 5`;

 2.2. Napisz funkcję obliczającą silnię z sumy a i b z zad 1. (Przekaż do funkcji 2 argumenty)

 2.3. Napisz funkcję, w której przekażesz jako pierwszy argument referencję do zmiennej, która przechowuje liczbę, a jako drugi argument wartość o ile przekazana liczba ma zostać zinkrementowana
 tj. `zwieksz<double>(a, 8.1)` gdzie `double a = 5`, zmieni wartosc `a = 13.1`

## Zadanie 3
3.1. Stwórz klase szablonowa ktora w konstruktorze bedzie 
przyjmować 2 argumenty liczbowe tego samego typu i przypisze je 
do pol o nazwach a i b. Następnie stwórz metode "Multiply" ,która wypisze
wynik mnożenia tych 2 liczb przez siebie w konsoli

3.2. Dodaj odpowiednia funkcjonalność (Podpowiedz: wzorzec szczegołowy) tak aby po wpisaniu dwoch
lańcuchów znaków (char*) funkcjia wypisywała dlugość pierwszego łancucha pomnozoną przez długość drugiego łańcucha 

3.3. Stworz nowa klase taka aby mogła przyjmować 2 argumenty o różnych typach liczb
(np. double * int),zainplementuj funkcje "Multiply", wypisz wynik działania w konsoli.
Wywołanie: `mojaKlasa<int,double> nazwa_klasy(2,2.50);`

## Zadanie 4
4. Dostosuj funckje "readFromFile" w taki sposób aby poprawnie wczytywala obiekty z pliku User.txt oraz Car.txt i wypisywałaje na konsoli
`Wywołanie:
	readList<Car>("Car.txt");
	readList<User>("User.txt");`
  
## Zadanie 5
5. Dodaj do klasy Contener szablon funkcjie odpowiedzialnej za dodawanie elementu o konkretnym typie do
odpowiedniego pola ( uzyj typeid() ) oraz wyswietlajaca kompunikat jakiego typu element dodalismy i aktualna sume elementow
`Wywołanie:
	contener.addElement<int>(5);
	contener.addElement<double>(5.23);`
