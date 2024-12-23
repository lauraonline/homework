// Escreva um algoritmo que leia um vetor de 50 posições de números inteiros e mostre somente os positivos. 
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int vet[50], i;
    // leitura
    for (i = 1; i <= 50; i++) {
        cout<<"Insira o "<<i<<"º valor: ";
        cin>>vet[i-1];
    }
    cout<<endl<<"Valores positivos: ";
    // organização
    for (i = 0; i <= 49; i++) {
        if (vet[i] > 0) {
            if (i < 49) {
                cout<<vet[i]<<", ";
            } else {
                cout<<vet[i]<<".";
            }
        }
    }
    cout<<endl;
    system("Pause");
}