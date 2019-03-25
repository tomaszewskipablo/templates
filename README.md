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

 2.2: Rozwiń tę funkcję tak aby argumenty mogły być dwóch różnych typów liczbowych

 2.3: Napisz funkcję, w której przekażesz jako pierwszy argument referencję do zmiennej, która przechowuje liczbę, a jako drugi argument wartość o ile przekazana liczba ma zostać zinkrementowana
 tj. `zwieksz<double>(a, 8.1)` gdzie `double a = 5`, zmieni wartosc `a = 13.1`
