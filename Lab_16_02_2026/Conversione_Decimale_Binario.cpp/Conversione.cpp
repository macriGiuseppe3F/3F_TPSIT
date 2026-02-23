/*Scrivere un codice in c++ che letto in input un numero decimale
 effettui la conversione in binario del numero dato ( il numero decimale è <= 128)
 e stampi un output il numero binario risultato della conversione
*/

#include <iostream>
using namespace std;
int main()
{

    int numero_decimale;
    int binario[8]; // Array per memorizzare i bit del numero binario
    cout << "Inserisci un numero decimale (<= 128): ";
    cin >> numero_decimale;
    if (numero_decimale < 0 || numero_decimale > 128)
    {
        cout << "Numero non valido. Inserisci un numero tra 0 e 128.";
    }

    int i = 7;
    while (numero_decimale > 0)
    {
        binario[i] = numero_decimale % 2;
        numero_decimale /= 2;
        i--;
    }
    cout << "Il numero binario è: ";
    for (int j = i + 1; j < 8; j++)
    {
        cout << binario[j];
    };

    return 0;
}