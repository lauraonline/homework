// 1. Escreva um algoritmo que leia dois vetores de 10 posições e faça a multiplicação dos elementos de mesmo índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante. 
#include <iostream>
#include <locale.h>
using namespace std;
main() {
    setlocale(LC_ALL, "Portuguese");
    float vet1[10], vet2[10], vetr[10];
    int i;
    // loop vetor 1
    for (i = 1; i <= 10; i++) {
        cout<<"Insira o valor "<<i<<" do vetor 1: ";
        cin>>vet1[i-1];
    }
    cout<<endl;
    // loop vetor 2
    for (i = 1; i <= 10; i++) {
        cout<<"Insira o valor "<<i<<" do vetor 2: ";
        cin>>vet2[i-1];
    }
    cout<<endl;
    // loop mult
    cout<<"Valor final do vetor 1:"<<endl;
    for (i = 0; i <= 9; i++) {
        cout<<vet1[i]<<"\t";
    }
    cout<<endl;
    cout<<"Valor final do vetor 2:"<<endl;
    for (i = 0; i <= 9; i++) {
        cout<<vet2[i]<<"\t";
    }
    cout<<endl;
    for (i = 0; i <= 9; i++) {
        vetr[i] = vet1[i] * vet2[i];
    }
    cout<<"Resultado da multiplicação dos vetores:"<<endl;
    for (i = 0; i <= 9; i++) {
        cout<<vetr[i]<<"\t";
    }
    cout<<endl;
    system("Pause");
}