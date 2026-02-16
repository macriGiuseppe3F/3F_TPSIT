/*Scrivi un programma in c++ che converte un numero da decimale a esadecimale*/

#include <iostream>
using namespace std;
int main(){

    int N;
    cout<<"\nInserisci un numero esadecimale:";
    cin>>N;

    if(N==0){
        cout<<"\nEsadecimale:0";
        return 0;
    }

    int temp = N;
    string esadecimale = " ";

    char cifre[] = {'0','1','2','3','4','5','6','7','8','9',
                    'A','B','C','D','E','F'};


         while (temp > 0) {
        int resto = temp % 16;           // Prendo il resto
        esadecimale = cifre[resto] + esadecimale;  // Lo aggiungo davanti
        temp = temp / 16;                // Divido per 16
    }

    cout << "Numero in esadecimale: " << esadecimale;
    
    return 0;
}