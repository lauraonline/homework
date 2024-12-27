// Faça um algoritmo que leia um vetor de 80 posições e encontre o menor valor. Mostre-o juntamente com seu número de ordem(índice).
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    int vet[80], menor[2], i; // 8
    // leitura
    for (i = 1; i <= 80; i++) { // 8
        cout<<"Insira o "<<i<<"º valor: ";
        cin>>vet[i-1];
    }
    menor[0] = vet[0];
    menor[1] = 0;
    for (i = 0; i <= 79; i++) { // 8
        if (vet[i] < menor[0]) {
            menor[0] = vet[i];
            menor[1] = i;
        } 
    }
    cout<<"Menor valor: "<<menor[0]<<" (posição: "<<menor[1]+1<<")";
}