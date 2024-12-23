// Escreva um algoritmo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantos valores pares existem no vetor.
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int vet[20], i, con = 0;
    // leitura
    for (i = 1; i <= 20; i++) {
        cout<<"Insira o valor "<<i<<": ";
        cin>>vet[i-1];
    }
    cout<<endl;
    // checagem
    for (i = 0; i <= 19; i++) {
        if (vet[i] % 2 == 0) {
            con = con + 1;
        }
    }
    cout<<"Número de valores pares: "<<con<<". (";
    for (i = 0; i <= 19; i++) {
        if (vet[i] % 2 == 0) {
            if (i < 19) {
                cout<<vet[i]<<", ";
            } else {
                cout<<vet[i];
            }
        }
    }
    cout<<")"<<endl;
    system("Pause");
}