// Escreva um algoritmo que leia um vetor inteiro de 30 posições e crie um segundo vetor, substituindo os valores nulos por 1. Mostre os 2 vetores.
#include <iostream>
#include <locale.h>
using namespace std;
main() {
    setlocale (LC_ALL, "Portuguese");
    float vet[30], nul[30]; // 5
    int i;
    // leitura
    for (i = 1; i <= 30; i++) { // 5
        cout<<"Insira o "<<i<<"º valor: ";
        cin>>vet[i-1];
    }
    cout<<endl;
    // organização
    for (i = 0; i <= 29; i++) { // 5
        nul[i] = vet[i];
        if (vet[i] == 0) {
            nul[i] = 1;
        }
    }
    // impressão
    cout<<"Valor do vetor inicial:"<<endl;
    for (i = 0; i <= 29; i++) { // 5
        cout<<vet[i]<<"\t";
    }
    cout<<endl;
    cout<<"Valor do vetor final:"<<endl;
    for (i = 0; i <= 29; i++) { // 5
        cout<<nul[i]<<"\t";
    }
    cout<<endl;
    system("Pause");
}
