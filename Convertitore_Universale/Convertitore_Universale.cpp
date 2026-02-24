/*Esercizio definitivo, del convertitore universale*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int scelta;
    char continua;

    do
    {
        cout << "\n===== CONVERTITORE UNIVERSALE =====\n";
        cout << "1. Decimale -> Binario\n";
        cout << "2. Decimale -> Ottale\n";
        cout << "3. Decimale -> Esadecimale\n";
        cout << "4. Binario -> Decimale\n";
        cout << "5. Ottale -> Decimale\n";
        cout << "6. Esadecimale -> Decimale\n";
        cout << "0. Esci\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta)
        {
        case 1:
        { // Dec -> Bin
            int n, bin = 0, resto, posto = 1;
            cout << "Inserisci numero decimale: ";
            cin >> n;
            while (n > 0)
            {
                resto = n % 2;
                bin = bin + resto * posto;
                posto = posto * 10;
                n = n / 2;
            }
            cout << "Binario: " << bin << endl;
            break;
        }

        case 2:
        { // Dec -> Oct
            int n, oct = 0, resto, posto = 1;
            cout << "Inserisci numero decimale: ";
            cin >> n;
            while (n > 0)
            {
                resto = n % 8;
                oct = oct + resto * posto;
                posto = posto * 10;
                n = n / 8;
            }
            cout << "Ottale: " << oct << endl;
            break;
        }

        case 3:
        { // Dec -> Esa
            int n, resto;
            cout << "Inserisci numero decimale: ";
            cin >> n;
            int hex[20], i = 0;
            while (n > 0)
            {
                hex[i] = n % 16;
                n = n / 16;
                i++;
            }
            cout << "Esadecimale: ";
            for (int j = i - 1; j >= 0; j--)
            {
                if (hex[j] < 10)
                    cout << hex[j];
                else
                    cout << char(hex[j] + 55);
            }
            cout << endl;
            break;
        }

        case 4:
        { // Bin -> Dec
            int bin, dec = 0, base = 1, resto;
            cout << "Inserisci numero binario: ";
            cin >> bin;
            while (bin > 0)
            {
                resto = bin % 10;
                dec = dec + resto * base;
                base = base * 2;
                bin = bin / 10;
            }
            cout << "Decimale: " << dec << endl;
            break;
        }

        case 5:
        { // Oct -> Dec
            int oct, dec = 0, base = 1, resto;
            cout << "Inserisci numero ottale: ";
            cin >> oct;
            while (oct > 0)
            {
                resto = oct % 10;
                dec = dec + resto * base;
                base = base * 8;
                oct = oct / 10;
            }
            cout << "Decimale: " << dec << endl;
            break;
        }

        case 6:
        { // Esa -> Dec
            string hex;
            cout << "Inserisci numero esadecimale: ";
            cin >> hex;
            int dec = 0, base = 1;
            for (int i = hex.length() - 1; i >= 0; i--)
            {
                char c = hex[i];
                int val;
                if (c >= '0' && c <= '9')
                    val = c - '0';
                else if (c >= 'A' && c <= 'F')
                    val = c - 'A' + 10;
                else if (c >= 'a' && c <= 'f')
                    val = c - 'a' + 10;
                dec += val * base;
                base *= 16;
            }
            cout << "Decimale: " << dec << endl;
            break;
        }

        case 0:
            cout << "Programma terminato.\n";
            return 0;

        default:
            cout << "Scelta non valida!\n";
        }

        cout << "\nVuoi fare un'altra conversione? (s/n): ";
        cin >> continua;

    } while (continua == 's' || continua == 'S');

    cout << "Programma terminato.\n";
    return 0;
}