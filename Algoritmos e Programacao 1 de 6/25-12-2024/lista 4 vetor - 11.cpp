//  Faça um algoritmo que leia um vetor de 500 posições de números inteiros e divida todos os seus elementos pelo menor valor do vetor. Mostre o vetor após os cálculos.
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int vet[500], i; // 5
    // leitura
    for (i = 1; i <= 500; i++) { // 5
        cout<<"Insira o "<<i<<"º valor: ";
        cin>>vet[i-1];
    }
    // exibição
    cout<<"Vetor final:"<<endl;
    for (i = 0; i <= 499; i++) { // 5
        cout<<vet[i]<<"\t";
    }
    cout<<endl;
    // cálculo e exibição
    cout<<"Vetores calculados:\nDivisão inteira (resultado/resto)"<<endl;
    for (i = 0; i <= 499; i++) { // 5
        cout<<vet[i]/vet[0]<<"/"<<vet[i]%vet[0]<<"\t";
    }
    cout<<endl;
    cout<<"Divisão real:"<<endl;
    for (i = 0; i <= 499; i++) { // 5
        cout<<float(vet[i])/vet[0]<<"\t";
    }
    cout<<endl;
    system("Pause");
}