/*Scrivi un programma in c++ che converte un numero da decimale a ottale*/

#include <iostream>
using namespace std;
int main(){

    int N;
    cout<<"\nInserisci un numero";
    cin>>N;

    int temp = N;
    string ottale = " ";

     while (temp > 0) {
        int resto = temp % 8;
        ottale = char(resto + '0') + ottale;
        temp = temp / 8;
    }

    cout<<"\nNumero in ottale:"<<ottale;
 
    return 0;
}