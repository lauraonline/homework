// Escreva um algoritmo que leia um vetor de 80 elementos inteiros. Encontre e mostre o maior e o menor elemento e sua posição no vetor.
#include <iostream>
#include <locale.h>
using namespace std;

main() {
    setlocale (LC_ALL, "Portuguese");
    int vet[10], i, maior[2], menor[2]; // 10
    // leitura
    for (i = 0; i <= 9; i++) { // 10
        cout<<"Insira o "<<i+1<<"º valor: ";
        cin>>vet[i];
        //organização
        if (i == 0) {
            maior[1] = vet[i];
            maior[2] = i;
            menor[1] = vet[i];
            menor[2] = i;
        } else {
            if (vet[i] > maior[1]) {
                maior[1] = vet[i];
                maior[2] = i;
            }
            if (vet[i] < menor[1]) {
                menor[1] = vet[i];
                menor[2] = i;
            }
        }
    }
    cout<<"Maior número: "<<maior[1]<<" (posição: "<<maior[2]+1<<")"<<endl;
    cout<<"Menor número: "<<menor[1]<<" (posição: "<<menor[2]+1<<")"<<endl;
    system("Pause");
}