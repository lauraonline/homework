// Escreva um algoritmo que leia um vetor de 80 elementos inteiros. Encontre e mostre o maior e o menor elemento e sua posição no vetor.
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int vet[80], i, maior[2], menor[2]; // 10
    // leitura
    for (i = 0; i <= 79; i++) { // 10
        cout<<"Insira o "<<i+1<<"º valor: ";
        cin>>vet[i];
        
    }
    // organização
    maior[0] = vet[0];
    maior[1] = 0;
    menor[0] = vet[0];
    menor[1] = 0;
    for (i = 1; i <= 79; i++) { // 10
        if (vet[i] > maior[0]) {
            maior[0] = vet[i];
            maior[1] = i;
        }
        if (vet[i] < menor[0]) {
            menor[0] = vet[i];
            menor[1] = i;
        }
    }
    cout<<"Maior número: "<<maior[0]<<" (posição: "<<maior[1]+1<<")"<<endl;
    cout<<"Menor número: "<<menor[0]<<" (posição: "<<menor[1]+1<<")"<<endl;
    system("Pause");
}