/* Scrivi un programma che converta un numero da ottale a decimale */

#include <iostream>
using namespace std;

int main() {

    int N, risultato = 0;
    int potenza = 1;  // rappresenta 8^0 all'inizio

    cout << "\nInserisci il numero che vuoi convertire in base 8: ";
    cin >> N;

    while (N > 0) {

        int cifra = N % 10;      // prende l'ultima cifra
        risultato += cifra * potenza;

        potenza *= 8;            // passa alla potenza successiva
        N /= 10;                 // elimina l'ultima cifra
    }

    cout << "\nIl numero in decimale è: " << risultato;

    return 0;
}